#include "unity.h"
#include "calc.h"

void setUp(void){}

void tearDown(void){}

void test_complexAdd(void){
    complex_t n1,n2,n3;
    // for positive number
    n1.real = 5;
    n1.imaginary = 7;
    n2.real = 2;
    n2.imaginary = 9;

    TEST_ASSERT_EQUAL_INT(PASS, complexAdd(n1,n2,&n3));
    TEST_ASSERT_EQUAL_FLOAT(7.0f,n3.real);
    TEST_ASSERT_EQUAL_FLOAT(16.0f,n3.imaginary);

    // for negative number
    n1.real = -5;
    n1.imaginary = -7;
    n2.real = -2;
    n2.imaginary = -9;

    TEST_ASSERT_EQUAL_INT(PASS, complexAdd(n1,n2,&n3));
    TEST_ASSERT_EQUAL_FLOAT(-7.0f,n3.real);
    TEST_ASSERT_EQUAL_FLOAT(-16.0f,n3.imaginary);
}

void test_complexSub(void){
    complex_t n1,n2,n3;
    // for positive number
    n1.real = 5;
    n1.imaginary = 9;
    n2.real = 2;
    n2.imaginary = 7;

    TEST_ASSERT_EQUAL_INT(PASS, complexSub(n1,n2,&n3));
    TEST_ASSERT_EQUAL_FLOAT(3.0f,n3.real);
    TEST_ASSERT_EQUAL_FLOAT(2.0f,n3.imaginary);

    // for negative number
    n1.real = -5;
    n1.imaginary = -9;
    n2.real = -2;
    n2.imaginary = -7;

    TEST_ASSERT_EQUAL_INT(PASS, complexSub(n1,n2,&n3));
    TEST_ASSERT_EQUAL_FLOAT(-3.0f,n3.real);
    TEST_ASSERT_EQUAL_FLOAT(-2.0f,n3.imaginary);
}

void test_complexMul(void){
    complex_t n1,n2,n3;
    // for positive number
    n1.real = 2;
    n1.imaginary = 1;
    n2.real = 2;
    n2.imaginary = 3;

    TEST_ASSERT_EQUAL_INT(PASS, complexMul(n1,n2,&n3));
    TEST_ASSERT_EQUAL_FLOAT(1.0f,n3.real);
    TEST_ASSERT_EQUAL_FLOAT(8.0f,n3.imaginary);

    // for negative number
    n1.real = -2;
    n1.imaginary = -1;
    n2.real = -2;
    n2.imaginary = -3;

    TEST_ASSERT_EQUAL_INT(PASS, complexMul(n1,n2,&n3));
    TEST_ASSERT_EQUAL_FLOAT(1.0f,n3.real);
    TEST_ASSERT_EQUAL_FLOAT(8.0f,n3.imaginary);
}

void test_complexDiv(void){
    complex_t n1,n2,n3;
    // for positive number
    n1.real = 2;
    n1.imaginary = 1;
    n2.real = 2;
    n2.imaginary = 3;

    TEST_ASSERT_EQUAL_INT(PASS, complexDiv(n1,n2,&n3));
    TEST_ASSERT_EQUAL_FLOAT(7.0f,n3.real);
    TEST_ASSERT_EQUAL_FLOAT(-4.0f,n3.imaginary);

    // for negative number
    n1.real = -2;
    n1.imaginary = -1;
    n2.real = -2;
    n2.imaginary = -3;

    TEST_ASSERT_EQUAL_INT(PASS, complexDiv(n1,n2,&n3));
    TEST_ASSERT_EQUAL_FLOAT(7.0f,n3.real);
    TEST_ASSERT_EQUAL_FLOAT(-4.0f,n3.imaginary);

     // div by zero
    n1.real = 1;
    n1.imaginary = 1;
    n2.real = 1;
    n2.imaginary = 1;

    TEST_ASSERT_EQUAL(ERR_DIV_BY_ZERO, complexDiv(n1,n2,&n3));
}

int main(){
    UNITY_BEGIN();
    RUN_TEST(test_complexAdd);
    RUN_TEST(test_complexSub);
    RUN_TEST(test_complexMul);
    RUN_TEST(test_complexDiv);
    return UNITY_END();
}
