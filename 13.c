//Program to print the factors of a given integer.
#include<stdio.h>
void factors(int);
int main()
{
    int n;
    printf("Enter a number to find factors of it: ");
    scanf("%d",&n);
    printf("\nFactors of %d are:\n",n);
    factors(n);
    return 0;
}
void factors(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            printf("%d ",i);
        else continue;
    }
    printf("\n");
}

