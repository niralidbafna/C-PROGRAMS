//Program to check whether a given number is a prime number or not.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer number: ");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            printf("Not a prime number\n"); exit(0);
        }
    }
    printf("Prime number\n");
    return 0;
}

