#!/bin/sh
#build all tests

#lcrypto is for linking against OpenSSL crypto library, lm - against math library
#g to produce debug information, Wall to see all compiler warnings
gcc tests/uint8_uniform_test.c tests/test_common.c hdata/hd_int_uniform.c -o build/uint8_test \
	-lcrypto -g -Wall &&
gcc tests/int8_uniform_test.c tests/test_common.c hdata/hd_int_uniform.c -o build/int8_test \
	-lcrypto -g -Wall &&
gcc tests/uint16_uniform_test.c tests/test_common.c hdata/hd_int_uniform.c -o build/uint16_test \
	-lcrypto -g -Wall &&
gcc tests/int16_uniform_test.c tests/test_common.c hdata/hd_int_uniform.c -o build/int16_test \
	-lcrypto -g -Wall &&
gcc tests/uint32_uniform_test.c tests/test_common.c hdata/hd_int_uniform.c -o build/uint32_test \
	-lcrypto -g -Wall &&
gcc tests/int32_uniform_test.c tests/test_common.c hdata/hd_int_uniform.c -o build/int32_test \
	-lcrypto -g -Wall &&
gcc tests/math_test.c -o build/math_test -lm -Wall &&
gcc tests/float_test.c -o build/float_test -Wall
