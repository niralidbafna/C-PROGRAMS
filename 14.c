//Program to print the prime factors of a given integer.
#include<stdio.h>
void factors(int);
int prime(int);
int main()
{
    int n;
    printf("Enter a number to find prime factors of it: ");
    scanf("%d",&n);
    printf("\nPrime Factors of %d are:\n",n);
    factors(n);
    return 0;
}
void factors(int n)
{
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
            if(prime(i))
                printf("%d ",i);
        else continue;
    }
    printf("\n");
}
int prime(int n)
{
    for(int i=2;i<=n/2;i++)
        if(n%i==0) return 0;
    return 1;
}

