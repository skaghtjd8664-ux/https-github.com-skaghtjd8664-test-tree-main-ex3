#ifndef MY_FRACTION_H
#define MY_FRACTION_H
typedef struct
{
    int num;
    int den;
}my_fraction;

my_fraction add(my_fraction a, my_fraction b);
my_fraction minus(my_fraction a, my_fraction b); 
my_fraction mult(my_fraction a, my_fraction b);
my_fraction divide(my_fraction a, my_fraction b);

my_fraction parse_fraction(const char *str);
void print_fraction(my_fraction r);

#endif