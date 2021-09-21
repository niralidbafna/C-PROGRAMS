//anagram
#include<stdio.h>
#include<string.h>
typedef struct
{
    char cont[100];
}s;
int main()
{
    s str1,str2;
    int i,j;
    printf("Enter String 1: ");
    scanf("%[^\n]s",str1.cont);
    printf("Enter String 2: ");
    scanf("\n%[^\n]s",str2.cont);
    printf("Input: %s & %s\n",str1.cont, str2.cont);
    if(strlen(str1.cont)==strlen(str2.cont))
    {
        for(i=0;i<strlen(str1.cont);i++)
        {
            for(j=0;j<strlen(str2.cont);j++)
            {
                if(str1.cont[i]==str2.cont[j])
                {
                    str1.cont[i]=str2.cont[j]=-1;
                    break;
                }
            }
        }
    }
    i=-1;
    while(str1.cont[++i]==-1 && i<strlen(str1.cont));
    if(i>=strlen(str1.cont)) printf("Anagrams\n");
    else printf("Not Anagrams\n");
}
