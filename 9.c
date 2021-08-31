//7: Program to access digits of a given integer and print them in the same order.
#include<stdio.h>
int reverse(int);
int main()
{
    int n,rem,rev;
    printf("Enter the integer number: ");
    scanf("%d",&n);
    printf("The digits are: \n");
    rev=reverse(n);
    while(rev>0)
    {
        rem=rev%10;
        printf("%d\n",rem);
        rev=rev/10;
    }
    return 0;
}
int reverse(int n)
{
    int rem,rev=0;
    while(n>0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    return rev;
}

