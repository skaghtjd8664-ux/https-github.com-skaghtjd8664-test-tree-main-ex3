#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
    int num;
    int den;
}my_fraction;

int gcd(int a, int b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
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
my_fraction perimeter(my_fraction a, my_fraction b, int n)
{
    my_fraction r;

    r.num = (a.num * b.den + b.num * a.den) * n;
    r.den =  a.den * b.den;
    
    int g = gcd(r.num, r.den);
    r.num /= g;
    r.den /= g;

    return r;
}

my_fraction area(my_fraction a, my_fraction b)
{
    my_fraction r;

    r.num = a.num * b.num;
    r.den = a.den * b.den;
    
    int g = gcd(r.num, r.den);
    r.num /= g;
    r.den /= g;

    return r;
}

int main(int c, char** v)
{
    my_fraction width = parse_fraction(v[1]);
    my_fraction height = parse_fraction(v[2]);

    my_fraction p = perimeter(width, height, 2);
    my_fraction a = area(width, height);

    printf("Perimeter: %d/%d, Area: %d/%d\n", p.num, p.den, a.num, a.den);
    
    return 0;
}