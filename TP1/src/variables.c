#include <stdio.h>

int main(void) {
    char c = 'A';
    unsigned char uc = 200;
    short s = -10;
    unsigned short us = 1500;
    int i = -123;
    unsigned int ui = 123456;
    long l = -1234567890L;
    unsigned long ul = 1234567890UL;
    long long ll = -9876543210LL;
    unsigned long long ull = 9876543210ULL;
    float f = 3.5f;
    double d = 1.25;
    long double ld = 2.75L;

    printf("char = %c\n", c);
    printf("unsigned char = %u\n", uc);
    printf("short = %hd\n", s);
    printf("unsigned short = %hu\n", us);
    printf("int = %d\n", i);
    printf("unsigned int = %u\n", ui);
    printf("long = %ld\n", l);
    printf("unsigned long = %lu\n", ul);
    printf("long long = %lld\n", ll);
    printf("unsigned long long = %llu\n", ull);
    printf("float = %.2f\n", f);
    printf("double = %.2f\n", d);
    printf("long double = %.2Lf\n", ld);

    return 0;
}
