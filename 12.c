//Program to print prime numbers from 2 to n.
#include<stdio.h>
int prime(int n);
int main()
{
    int n,flag;
    printf("Enter a number n to print prime numbers between 2 to n: ");
    scanf("%d",&n);
    printf("\nPrime numbers from 2 to %d are:\n\n",n);
    for(int i=2;i<=n;i++)
    {
        flag=prime(i);
        if(flag==1) printf("%d ",i);
        else continue;
    }
    printf("\n");
    return 0;
}
int prime(int n)
{
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

