/*****************************************************************************************************
1. Write a program to reverse individual words in a given line of string

Input :  india is great
output : aidni si taerg
****************************************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void push(char *st, int *top, char c);
void pop(char *s,int *top);
int main()
{
    char str[50];
    char st[50];
    int top=-1;
    printf("Enter string: ");
    scanf("%[^\n]s",str);
    printf("\nInput: %s",str);
    printf("\nOutput: ");
    for(int i=0;i<=strlen(str);i++)
    {
        if(str[i]!=' ' && i!=strlen(str))
            push(st,&top,str[i]);
        else
        {
            while(top!=-1)
                pop(st,&top);

            printf(" ");
        }
    }
}
void push(char *st, int *top, char c)
{
    st[++(*top)]=c;
}
void pop(char *s,int *top)
{
    printf("%c",s[(*top)--]);
}

