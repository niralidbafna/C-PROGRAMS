//Program to access digits of a given integer and print them.
#include<stdio.h>
int main()
{
    int n,rem;
    printf("Enter the integer number: ");
    scanf("%d",&n);
    printf("The digits are: \n");
    while(n>0)
    {
        rem=n%10;
        printf("%d\n",rem);
        n=n/10;
    }
    return 0;
}

