#include <stdio.h>
#include <stdlib.h>

#include "my_fraction.h"
int main()
{
    char input1[20];
    char input2[20];
    char op;

    printf("input: ");
    scanf("%s %c %s", input1, &op, input2);

    my_fraction a = parse_fraction(input1);
    my_fraction b = parse_fraction(input2);
    my_fraction result;

    switch (op)
    {
        case '+':
         result = add(a, b);
         break;
        case '-':
        result = minus(a, b);
        break;
        case '*':
        result = mult(a, b);
        break;
        case '/':
        result = divide(a, b);
        break;
        default:
            printf("error");
            return 1;
    }
    printf("output: ");
    print_fraction(result);

    return 0;
}