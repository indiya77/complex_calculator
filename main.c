#include<stdio.h>
#include "calc.h"


int main(){
    complex_t a={1,1}, b={3,1}, c={0,0};

    complexAdd(a,b,&c);
    printf("%f %f\n", c.real,c.imaginary);

    complexSub(a,b,&c); 
    printf("%f %f\n", c.real,c.imaginary);

    complexMul(a,b,&c);
    printf("%f %f\n", c.real,c.imaginary);

    complexDiv(a,b,&c);
    printf("%f %f\n", c.real,c.imaginary);
}


