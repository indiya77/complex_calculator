/**
 * @file calc.h
 * @author Indiya_258071 (indiyabhenly@gmail.com)
 * @brief Complex Calculator - Contains functions to compute operations of complex numbers.
 * @version 0.1
 * @date 2021-03-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _COM_CAL_
#define _COM_CAL_
#include<stdlib.h>

typedef struct complex_t {
    float real;
    float imaginary;
} complex_t;

typedef enum error_t{
    PASS = 0,
    FAIL = -1,
    ERR_DIV_BY_ZERO = -2
}error_t;

/**
 * @brief Function to add two complex numbers
 * 
 * @param n1 First complex number n1
 * @param n2 Second complex number n2
 * @param n3 Performs addition of two numbers (n1+n2=*n3)
 * @return error_t returns error codes PASS = 0, FAIL = -1
 */

error_t complexAdd(complex_t n1, complex_t n2, complex_t *n3);

/**
 * @brief Funtion to subtract two complex numbers
 * 
 * @param n1 First complex number n1
 * @param n2 Second complex number n2
 * @param n3 Performs subtraction of two numbers (n1-n2=*n3)
 * @return error_t returns error codes PASS = 0, FAIL = -1
 */

error_t complexSub(complex_t n1, complex_t n2, complex_t *n3);

/**
 * @brief Function to multiply two complex numbers
 * 
 * @param n1 First complex number n1
 * @param n2 Second complex number n2
 * @param n3 Performs multiplication of two numbers (n1*n2=*n3)
 * @return error_t returns error codes PASS = 0, FAIL = -1
 */

error_t complexMul(complex_t n1, complex_t n2, complex_t *n3);

/**
 * @brief Function to divide two complex numbers
 * 
 * @param n1 First complex number n1
 * @param n2 Second complex number n2
 * @param n3 Performs division of two numbers (n1/n2=*n3)
 * @return error_t returns error codes PASS = 0, FAIL = -1
 */

error_t complexDiv(complex_t n1, complex_t n2, complex_t *n3);

#endif