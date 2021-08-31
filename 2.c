/*2. Addition of two numbers using functions
       1. to accept values
       2. to add two numbers
       3. to display result
       using suitable parameter passing technique
   */
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
    int num1, num2, sum;
    printf("Enter num1 and num2: ");
    accept(&num1, &num2);
    sum=add(num1,num2);
    printf("Sum: ");
    display(num1, num2, sum);

    return 0;
}

