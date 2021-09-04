/*
Write a program to accept and display string (Memory must be allocated dynamically) using functions

Sample i/o

Input : rnsit
Output: rnsit
*/
#include<stdio.h>
#include<stdlib.h>
void accept(char *str)
{
    scanf("%s",str);
}
void display(char *str)
{
    printf("%s\n",str);
}
int main()
{
    char *str = (char *)malloc(sizeof(char)*10);
    printf("Input string : ");
    accept(str);
    printf("Output string: ");
    display(str);
}
