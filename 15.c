//Program to check if the given number is Happy Number or not.
#include<stdio.h>
#include<math.h>
int happy(int n);
int main()
{
    int n,res;
    printf("Enter the number to check if it's a happy number or no: ");
    scanf("%d",&n);
    res=n;

    while(res!=1 && res!=4)
        res=happy(res);

    if(res==1) printf("%d is a happy number\n",n);
    if(res==4) printf("%d is an unhappy number\n",n);

}
int happy(int n)
{
    int rem, sum=0;
    while(n!=0)
    {
        rem=n%10;
        sum+=pow(rem,2);
        n=n/10;
    }
    return sum;
}

