/*
test_common.h - common code for test programs for honeydata library
License: BSD 2-Clause
*/

#ifndef TEST_COMMON_H
#define TEST_COMMON_H

#include "../hdata/hd_int_uniform.h"

//encrypt and decrypt a message
extern int encrypt(const unsigned char *plaintext, const size_t plaintext_len,
	const unsigned char *key, const unsigned char *iv, unsigned char *ciphertext);
extern int decrypt(const unsigned char *ciphertext, const size_t ciphertext_len,
	const unsigned char *key, const unsigned char *iv, unsigned char *plaintext);

//functions for unsigned and signed 8 bit integers
//get a number of occurences of different elements in array, print a numeric array
extern int8_t stats_uint8_array(const uint8_t *in_array, const size_t size, uint64_t *stats);
extern int8_t print_uint8_array(const uint8_t *array, const size_t size);

extern int8_t stats_int8_array(const int8_t *in_array, const size_t size, uint64_t *stats);
extern int8_t print_int8_array(const int8_t *array, const size_t size);

//for unsigned and signed 16 bit integers
extern int8_t stats_uint16_array(const uint16_t *in_array, const size_t size, uint64_t *stats);
extern int8_t print_uint16_array(const uint16_t *array, const size_t size);

extern int8_t stats_int16_array(const int16_t *in_array, const size_t size, uint64_t *stats);
extern int8_t print_int16_array(const int16_t *array, const size_t size);

//for unsigned and signed 32 bit integers
extern int8_t print_uint32_array(const uint32_t *array, const size_t size);
extern int8_t print_int32_array(const int32_t *array, const size_t size);

//for unsigned and signed 64 bit integers
extern int8_t print_uint64_array(const uint64_t *array, const size_t size);
extern int8_t print_int64_array(const int64_t *array, const size_t size);

extern void test_init(void);
extern void test_deinit(void);

extern void OpenSSL_error(void);
extern void test_error(void);

#endif
