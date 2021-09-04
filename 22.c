/*
 Write a program to accept and display string (Memory must be allocated dynamically)
   with out using functions

Sample i/o

Input : rnsit
Output: rnsit
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *str = (char *)malloc(sizeof(char)*10);
    printf("Input string : ");
    scanf("%s",str);
    printf("Output string: %s",str);
}
