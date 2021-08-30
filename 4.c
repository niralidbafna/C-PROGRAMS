//4. Program to add two numbers, memory to store information must be acquired using DYNAMIC MEMORY ALLOCATION techniques .

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *num1, *num2, *sum;
    num1=(int *)malloc(sizeof(int));
    num2=(int *)malloc(sizeof(int));
    sum=(int *)malloc(sizeof(int));

    printf("Enter num1 and num2: ");
    scanf("%d%d",num1,num2);
    *sum = (*num1) + (*num2);
    printf("Sum: %d + %d = %d\n", *num1, *num2, *sum);

    return 0;
}
