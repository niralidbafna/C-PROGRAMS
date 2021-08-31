//Program to print even and odd digits of given integer.
#include<stdio.h>
int main()
{
    int n, rem;
    printf("Enter an integer number: ");
    scanf("%d",&n);

    printf("\nOdd\tEven\n");
    while(n>0)
    {
        rem=n%10;
        rem%2==0? printf("\t%d",rem) : printf("%d",rem);
        printf("\n");
        n=n/10;
    }
}

