#include<stdio.h>
#include<time.h>
#include<stdio.h>
/**
*main - Determines if a number is positive,egative or zero.
*
*Description:Determines if positive, negative or zero. 
*
*Returns: Always 0 (Success)
*
*/

int main(void)
{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;


printf("%d \n", n);

if (n < 0)
printf("%d is positive\n", n);

else if (n > 0)
printf("%d is negative\n", n);

else 
printf("%d is zero\n", n);

return (0);
}