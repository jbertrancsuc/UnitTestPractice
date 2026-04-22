#!/bin/bash

make clean
make
./PasswordTest
gcov -r Password.app
