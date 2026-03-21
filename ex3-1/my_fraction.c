#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "my_fraction.h"

int gcd(int a, int b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}
my_fraction add(my_fraction a, my_fraction b)
{
    my_fraction r;

    r.num = a.num * b.den + b.num * a.den;
    r.den = a.den * b.den;
    
    int g = gcd(r.num, r.den);
    r.num /= g;
    r.den /= g;

    if (r.den == 0)
    {
        printf("error");
        exit(1);
    }

    return r;
}
my_fraction minus(my_fraction a, my_fraction b)
{
    my_fraction r;

    r.num = a.num * b.den - b.num * a.den;
    r.den = a.den * b.den;
    
    int g = gcd(r.num, r.den);
    r.num /= g;
    r.den /= g;
    
    if (r.den == 0)
    {
        printf("error");
        exit(1);
    }

    return r;
}
my_fraction mult(my_fraction a, my_fraction b)
{
    my_fraction r;

    r.num = a.num * b.num;
    r.den = a.den * b.den;
    
    int g = gcd(r.num, r.den);
    r.num /= g;
    r.den /= g;

    if (r.den == 0)
    {
        printf("error");
        exit(1);
    }

    return r;
}
my_fraction divide(my_fraction a, my_fraction b)
{
    if (b.num ==0)
    {
        printf("error\n");
        exit(1);
    }
    my_fraction r;

    r.num = a.num * b.den;
    r.den = b.num * a.den;
    
    int g = gcd(r.num, r.den);
    r.num /= g;
    r.den /= g;

    return r;
}

my_fraction parse_fraction(const char* str)
{
    my_fraction r;

    if (strchr(str, '/') != NULL)
    {
        sscanf(str, "%d/%d", &r.num, &r.den);
        return r;
    }

    return r;
}

void print_fraction(my_fraction r)
{
    if (r.den == 1)
        printf("%d\n", r.num);
    else
        printf("%d/%d\n", r.num, r.den);
}