# PASTA

PASTA is a C++ library that abstracts the Clang compiler toolchain, and provides
detailed access to compilation artifacts using APIs that mirror those available in Clang. PASTA
tries to achieve the following goals:

  * Provide a baseline set of APIs that is relatively stable and does not require someone to
    actually depend directly on Clang headers/libraries, thus enabling a substantially
    easier distribution model.
    
  * Properly manage memory for all objects provided through the API. One should not have to
    worry about object lifetimes when using PASTA.
    
  * Provide additional information/access. Native Clang APIs do not provide detailed token information
    of any kind. One cannot ask for the tokens associated with an AST node, for example. PASTA attempts
    to resolve this, among other similar issues.

## Getting and Building the Code

First, update aptitude and get install the baseline dependencies such is for
example `git`, `cmake`, `ninja` and your compiler of choice (remember it needs to support
C++20). It is useful to use the same compiler at every subset to avoid some
name mangling problems. If you're using macOS then we recommend installing
Homebrew, and ensuring that you have Python 3.9 installed, along with an
up-to-date `cmake` and `ninja`.

### cxx-common

As for the dependencies, most of them are provided by [cxx-common](https://github.com/trailofbits/cxx-common). To get them you have two options:
  * Get the pre-built package for some available architectures
  * Build the yourself. (Can take around 40 minutes, since LLVM is being built)
For more depth on each option consult [`README`](https://github.com/lifting-bits/cxx-common#readme) of the project.

**Note:** PASTA relies upon Clang patches which are included in cxx-common. PASTA cannot build without the presence of these patches.

If you choose to build it manually first get the sources:

```shell
# Clone
git clone https://github.com/trailofbits/cxx-common.git
cd cxx-common
```

The repository uses [vcpkg](https://github.com/microsoft/vcpkg) which makes entire process rather easy.

```shell
./build_dependencies.sh --export-dir /path/to/export/vcpkg-15 "llvm-15[pasta]"
```

If you do not plan to tinker with or work on PASTA, then we recommend adding in
`--release` so that you get a release build of LLVM.

It is important *do not forget the `llvm-15[pasta]`* option, otherwise it will not build
and subsequently the projects built in next step will try to link system libraries
and that is highly unstable and not
tested (at least for now).


### PASTA

And finally to build PASTA itself.

#### On Linux
```shell
git clone https://github.com/trailofbits/pasta.git
cd pasta
mkdir build
cd build
cmake \
    -DCMAKE_BUILD_TYPE=RelWithDebInfo \
    -DCMAKE_TOOLCHAIN_FILE="/path/to/export/vcpkg-15/scripts/buildsystems/vcpkg.cmake" \
    -DVCPKG_TARGET_TRIPLET=x64-osx \
    -DVCPKG_HOST_TRIPLET=x64-osx-rel \
    ..
make install
```

#### On macOS

On macOS, you may need to manually specify the Clang compiler. You can't, however,
just specify `clang` or `clang++`, because then vcpkg will try to take over and produce
unusual results. Therefore, you should give the absolute path to your Clang.

```shell
git clone https://github.com/trailofbits/pasta.git
cd pasta
mkdir build
cd build
cmake \
    -DCMAKE_BUILD_TYPE=Release \
    -DVCPKG_ROOT=/path/to/cxx-common/vcpkg \
    -DVCPKG_TARGET_TRIPLET=x64-osx-rel \
    -DCMAKE_C_COMPILER=`which clang` \
    -DCMAKE_CXX_COMPILER=`which clang++` \
    -DPASTA_ENABLE_INSTALL=ON \
    ..
make install
```

### Testing

To run the test suite, configure PASTA in the usual way, with the addition of
the `PASTA_ENABLE_TESTING` and `LLVM_EXTERNAL_LIT` options speficied.

```shell
cmake \
    ... \
    -DPASTA_ENABLE_TESTING=ON \
    -DLLVM_EXTERNAL_LIT=/path/to/llvm-lit \
    ..
make check-pasta
```

# License

PASTA is licensed according to the [Apache 2.0](LICENSE) license. Large parts of PASTA are semi-autogenerated from Clang APIs. Clang is also licensed under Apache 2.0, with [LLVM exceptions](https://github.com/llvm/llvm-project/blob/main/clang/LICENSE.TXT).

This research was developed with funding from the Defense Advanced Research Projects Agency (DARPA). The views, opinions and/or findings expressed are those of the author and should not be interpreted as representing the official views or policies of the Department of Defense or the U.S. Government.
 
Distribution Statement A – Approved for Public Release, Distribution Unlimited
