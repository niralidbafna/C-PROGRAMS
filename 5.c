//5. Program to add two numbers, memory to store information must be acquired using DYNAMIC MEMORY ALLOCATION techniques using functions .
#include<stdio.h>
void accept(int *n1, int *n2)
{
    scanf("%d%d",n1,n2);
}
int add(int num1, int num2)
{
    return (num1+num2);
}
void display(int num1, int num2, int sum)
{
    printf("%d + %d = %d\n",num1,num2,sum);
}

int main()
{
    int *num1, *num2, *sum;
    num1=(int *)malloc(sizeof(int));
    num2=(int *)malloc(sizeof(int));
    sum=(int *)malloc(sizeof(int));

    printf("Enter num1 and num2: ");
    accept(num1,num2);
    *sum = add(*num1, *num2);
    printf("Sum: ");
    display(*num1,*num2,*sum);
    return 0;
}

