# C++ Boilerplate
[![Build Status](https://travis-ci.org/htsai51/cpp-boilerplate2.svg?branch=master)](https://travis-ci.org/htsai51/cpp-boilerplate2)
[![Coverage Status](https://coveralls.io/repos/github/htsai51/cpp-boilerplate2/badge.svg?branch=master)](https://coveralls.io/github/htsai51/cpp-boilerplate2?branch=master)
---

## Overview

Simple PID Controller C++ project with:

- cmake
- googletest

## Installation

- Checkout the repo (and submodules)
```bash
$ git clone --recursive https://github.com/htsai51/cpp-boilerplate2.git
cd cpp-boilerplate2
mkdir -p build
cd build
cmake ..
make
```

## Testing the code

- In your build/ directory
```bash
./test/cpp-test
```