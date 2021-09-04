//Program to check whether a number is a Pronic number or not.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,flag=0;
    printf("Enter number to check if it's pronic or not: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        if(i*(i+1)==n)
        {
            printf("Pronic Number\n");
            exit(0);
        }
    printf("Not a Pronic Number\n");
}
