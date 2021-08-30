//3. To add two numbers using functions and function prototypes.
#include<stdio.h>

void accept(int *, int *);
int add(int, int);
void display(int, int, int);
int main()
{
    int num1, num2, sum;
    printf("Enter num1 and num2: ");
    accept(&num1, &num2);
    sum=add(num1,num2);
    printf("Sum: ");
    display(num1, num2, sum);

    return 0;
}
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

