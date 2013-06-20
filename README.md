challenge
=========

This code aims to build a wrapper around two linear system solvers, one dense, and the other sparse.

We just provide the sources, together with a simple test, which, by the way, fails due to sparse solver accuracy.

The source code might not be perfect, but the actual content of the files is irrelevant. The goal is to set up a project, build it from source, including it's dependencies, and run it, both the main application and tests.

It should work in Windows, Linux and Mac platforms.

The project uses the following libraries:

Eigen http://eigen.tuxfamily.org
CSparse Version 3.1.0 http://www.cise.ufl.edu/research/sparse/CSparse/
Google GTest https://code.google.com/p/googletest/