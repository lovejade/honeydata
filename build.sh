#!/bin/sh
#build all tests
#fno-builtin-memset asks compiler do not optimize memset() calls
#lcrypto is for linking against OpenSSL crypto library, lm - against math library
#Wall to see all compiler warnings
gcc test_uint8_uniform.c test_common.c lib/hd_int_uniform.c -o htest -fno-builtin-memset -lcrypto -lm -Wall