//max occurrence of characters
#include<stdio.h>
int main()
{
    int count[27]={0}, index, max=0;
    char s[50];
    printf("Enter a string: ");
    scanf("%[^\n]s",s);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]==' ') continue;
        else
        {
            index=s[i]-'a';
            count[index]++;
        }
    }

    for(int i=0;i<27;i++)
        if(count[i]>max)
            max=count[i];

    printf("Characters that occurred max times(%d times) are ",max);
    for(int i=0;i<27;i++)
    {
        if(count[i]==max)
        {
            printf("%c, ",'a'+i);
        }
    }
    printf("\b\b \n");
}
