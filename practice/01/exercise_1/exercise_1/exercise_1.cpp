// Created by a.nikolsky 26.11.2020

#include <iostream>

int main()
{

    //Basic types:

    //integer types
    char c = 'a';
    unsigned char uc = 'a';
    signed char sc = 'a';
    int i = 12;
    unsigned int ui = 234;
    short s = -3;
    unsigned short us = 2;
    long l = 34;
    unsigned long ul = 21111111;


    //floating-point types
    float f = 2.345;
    double d = 3e12;
    long double ld = 12.23e18;


    //the void type
    //The void type specifies that no value is available.
    //It is used in three kinds of situations.
    //1. Function returns as void:  void exit (int status);
    //2. Function arguments as void: int rand(void);
    //3. Pointers to void: void *malloc( size_t size )

    printf("char: %c \n", c);
    printf("unsigned char: %c \n", uc);
    printf("signed char: %c \n", sc);
    printf("int: %d \n", i);
    printf("unsigned int: %u \n", ui);
    printf("short: %hi \n", s);
    printf("unsigned short: %hu \n", us);
    printf("long: %li \n", l);
    printf("unsigned long: %lu \n", ul);
    printf("float: %f \n", f);
    printf("double: %f \n", d);
    printf("long double: %f \n", ld);

    // ------------------------------------------------------

    //Derived types:

    // Array types
    int arr[5] = { 1,2,3,4,5 };


    // Struct types
    struct s {
        int i;
        double d;
        const char* c;
    }  s1{ 1, 1.1,"qqqqq" };


    // Pointer types
    int* p_int = &i;

    //Union types
    union Data {
        int i;
        float f;
        char str[20];
    } data;
    //3. Pointers to void: void *malloc( size_t size )
    // ------------------------------------------------------

    // Enumeration types
    enum State { Working = 1, Failed = 0 } state = Working;
}

