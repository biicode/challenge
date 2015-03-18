[![Build Status](https://travis-ci.org/biicode/challenge.svg?branch=master)](https://travis-ci.org/biicode/challenge)

Challenge
=========

Are you able to build and also create a reusable component from the following code in less than 1 hour? Prove it!

This code aims to build a wrapper around two linear system solvers, one dense, and the other sparse. Just the sources are provided, together with a simple test.

The source code might not be perfect, but the actual content of the files is irrelevant. The goal is to set up a project, build it from source, including it's dependencies, and run it, both the main application and tests. Then upload the result to somewhere in the internet, where it could be easily integrated and reused in new projects.

All code and dependencies are fully portable, so it must work in Windows, Linux and Mac platforms.

The project depends on the following libraries:

Eigen http://eigen.tuxfamily.org
CSparse Version 3.1.0 http://www.cise.ufl.edu/research/sparse/CSparse/
Google GTest https://code.google.com/p/googletest/


Building with biicode
===========================

```bash
$ git clone https://github.com/biicode/challenge.git
$ cd challenge
$ bii buzz
```

Now you can launch the "solvertool app" inside the "bin" directory
If you want to build and run the unit tests, just:

```bash
$ bii test
```

This latter command requires the following configuration in the biicode.conf file (provided for convenience, but you can directly edit it)
```
[tests]
    test1.cpp
    gtest_main.cc

[dependencies]
    gtest_main.cc + test1.cpp
```

To upload the result to biicode:

```bash
$ bii publish
```
