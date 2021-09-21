//Write a program that returns the word count in a given sentence.
#include<stdio.h>
int main()
{
    char s[50];
    int count=1;
    printf("Enter string: ");
    scanf("%[^\n]s",s);
    for(int i=0;i<strlen(s);i++)
        if(s[i]==' ')
            count++;

    printf("Word count: %d\n",count);
}
