#include<stdio.h>
#include<stdlib.h>

#include"my_math.h"

int main()
{
    int num1;
    int num2;
    int gcd_result;
    int lcm_result;

    printf("input: ");
    scanf("%d %d", &num1, &num2);

    gcd_result = gcd(num1, num2);
    lcm_result = lcm(num1, num2);

    printf("GCD: %d, LCM: %d", gcd_result, lcm_result);
}