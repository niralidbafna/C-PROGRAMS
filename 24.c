/*
3. Write a program to split string in to words with out using inbuilt function

Sample i/o

Input : india is great
Output:
	india
	is
	great
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[50];
    printf("Enter the string: ");
    scanf("%[^\n]s",str);
    printf("Output:\n");
    for(int i=0;str[i]!=NULL;i++)
        if(str[i]==' ')
            printf("\n");
        else printf("%c",str[i]);
}
