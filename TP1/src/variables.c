#include <stdio.h>
#include <string.h>

int main() {
    printf("Variables de différents types de base s :\n\n");

    char c = 'A';
    signed char sc = -65;
    unsigned char uc = 200;

    short s = -12345;
    signed short ss = -32000;
    unsigned short us = 65000;

    int i = -123456;
    signed int si = -98765;
    unsigned int ui = 4000000000U;

    long int li = -1234567890L;
    signed long int sli = -987654321L;
    unsigned long int uli = 4000000000UL;

    long long int lli = -123456789012345LL;
    signed long long int slli = -98765432109876LL;
    unsigned long long int ulli = 123456789012345ULL;

    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.618033988749894L;

    // Types caractères
    printf("char : %c\n", c);
    printf("char (signed)        : %d\n", sc);
    printf("char (unsigned)      : %u\n\n", uc);

    // Types entiers courts
    printf("short : %d\n", s);
    printf("short (signed)       : %d\n", ss);
    printf("short (unsigned)     : %u\n\n", us);

    // Types entiers
    printf("int : %d\n", i);
    printf("int (signed)         : %d\n", si);
    printf("int (unsigned)       : %u\n\n", ui);

    // Types long
    printf("long : %ld\n", li);
    printf("long int (signed)    : %ld\n", sli);
    printf("long int (unsigned)  : %lu\n\n", uli);

    // Types long long
    printf("long long : %lld\n", lli);
    printf("long long (signed)   : %lld\n", slli);
    printf("long long (unsigned) : %llu\n\n", ulli);

    // Types à virgule flottante
    printf("float                : %.2f\n", f);
    printf("double               : %.9f\n", d);
    printf("long double          : %.15Lf\n", ld);

    return 0;
}