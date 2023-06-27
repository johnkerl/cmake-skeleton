# cmake-skeleton

This is a cut-down from [SPFFL](https://github.com/johnkerl/spffl).  It has an installable library,
installable executable, and unit-test files.  It's not great but it works.

# Setup

## Build/install steps

Generate/build/test/install steps:

```
alias cmz='cmake --build build --target clean && rm -rf build'

alias  cmg='cmake -B build'
alias cmgd='cmake -B build -DCMAKE_BUILD_TYPE=Debug'

alias  cmb='cmake --build build'
alias  cmt='cmake --build build --target test'
alias  cmi='cmake --build build --target install'

export PATH=$(pwd)/build/cli/skeleton-main:$PATH
```

All in one:

```
cmz && cmg && cmb -j 12 && cmt
```

To get more details about failed unit tests including line numbers:

* Run `cmg` and `cmb`
* In place of `cmt`, `./build/test/base/test_base` (or whichever test executable)

## Compiler selection

```
cmz
cmg -D CMAKE_C_COMPILER=gcc -D CMAKE_CXX_COMPILER=g++
cmb -v
```

TODO:
```
-DCMAKE_INSTALL_PREFIX=$prefix
```

## Installation (WIP)

```
$ cmz
$ cmg
$ cmb
$ cmt
$ cmi
```

This creates:

* `/usr/local/include/skeleton/`
* `/usr/local/lib/libskeleton.dylib` (or `.so`)
* `/usr/local/bin/skeleton-main`

Then you can run `skeleton-main`. You can also built using the library like this:

```
$ g++ -std=c++20 -I /usr/local/include -L /usr/local/lib -lskeleton examples/example1.cpp -o example1
$ install_name_tool -add_rpath $(pwd)/dist/lib example1
```

If you use an install location other than `/usr/local`:

* Replace `cmg` above with `cmg -DCMAKE_INSTALL_PREFIX=./dist`
* On MacOS, use `install_name_tool` tell the executable where to find the library

```
$ g++ -std=c++20 -I dist/skeleton/include -L dist/lib -lskeleton examples/example1.cpp -o example1
$ install_name_tool -add_rpath $(pwd)/dist/lib example1
```

```
$ ./example1 foo bar
baz
```
