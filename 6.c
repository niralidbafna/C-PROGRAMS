//6. Program to add two numbers, using structures.
#include<stdio.h>

typedef struct
{
    int num1,num2,sum;
}st;
int main()
{
    st a;
    printf("Enter num1 and num2: ");
    scanf("%d%d",&(a.num1), &(a.num2));
    a.sum = a.num1 + a.num2;
    printf("Sum: %d + %d = %d\n",a.num1, a.num2, a.sum);

    return 0;
}

