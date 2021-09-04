//Program to convert a decimal number to binary.
#include<stdio.h>
int main()
{
    short bin[100];
    int dec, count=0;
    printf("Enter decimal number to convert to binary: ");
    scanf("%d",&dec);
    while(dec!=0)
    {
        bin[count++]=dec%2;
        dec=dec/2;
    }
    printf("Binary number: ");
    for(int i=count-1;i>=0;i--)
        printf("%d",bin[i]);
}
