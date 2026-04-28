#include <stdio.h>
#include <stdlib.h>

// Recursively check if number is prime
// Returns 1 if prime,0 if not
int isPrime(int number,int divisor)
{
    if(divisor==1)
    {
        return 1;
    }
    else if(number%divisor==0)
    {
        return 0;
    }
    else
    {
        return isPrime(number,divisor-1);
    }
}

int main()
{
    int n,i,result;

    printf("Enter a number:\n");
    scanf("%d",&n);

    // Check all numbers from 2 to n
    for(i=2;i<=n;i++)
    {
        result=isPrime(i,i/2);
        if(result==1)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
