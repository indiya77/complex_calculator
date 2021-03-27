#include "calc.h"

error_t complexAdd(complex_t n1, complex_t n2, complex_t *n3){
    
    n3->real = n1.real + n2.real;
    n3->imaginary = n1.imaginary + n2.imaginary;

    if (n3==NULL)
        return FAIL;

    else
        return PASS;
}

error_t complexSub(complex_t n1, complex_t n2, complex_t *n3){
    
    n3->real = n1.real - n2.real;
    n3->imaginary = n1.imaginary - n2.imaginary;

    if (n3==NULL)
        return FAIL;

    else
        return PASS;
}

error_t complexMul(complex_t n1, complex_t n2, complex_t *n3){
    
    n3->real = (n1.real * n2.real) - (n1.imaginary * n2.imaginary);
    n3->imaginary = (n1.real * n2.imaginary) + (n2.real * n1.imaginary);

    if (n3==NULL)
        return FAIL;

    else
        return PASS;
}

error_t complexDiv(complex_t n1, complex_t n2, complex_t *n3){

    float den = (n1.real * n2.real) - (n1.imaginary * n2.imaginary);

    if (den==0){return ERR_DIV_BY_ZERO;}
    
    n3->real = ((n1.real*n2.real) + (n2.imaginary*n1.imaginary))/den;
    n3->imaginary = ((n1.imaginary*n2.real) - (n2.imaginary*n1.real))/den;

    if (n3==NULL)
        return FAIL;

    else
        return PASS;
}