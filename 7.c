//7. Program to add two numbers, using structures and functions
#include<stdio.h>

typedef struct
{
    int num1,num2,sum;
}st;
void accept(st *a)
{
    scanf("%d%d",&(a->num1),&(a->num2));
}
int add(st a)
{
    return (a.num1 + a.num2);
}
void display(st a)
{
    printf("%d + %d = %d\n",a.num1,a.num2,a.sum);
}
int main()
{
    st a;
    printf("Enter num1 and num2: ");
    accept(&a);
    a.sum=add(a);
    printf("Sum: ");
    display(a);

    return 0;
}