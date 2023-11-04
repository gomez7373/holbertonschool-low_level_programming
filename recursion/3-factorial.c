#include <stdio.h>

unsigned long factorial(int n);

int main(void)
{
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Factorial of %d = %lu\n", number, factorial(number));

    return 0;
}

unsigned long factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

