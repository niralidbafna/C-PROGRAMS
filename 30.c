/*
Number game: Input an element ( string, number etc) and if the input is a number then accept, if the input is "done" then stop  accepting, otherwise accept the next element and so on.
Use the element "done" to stop accepting input and return the largest and smallest element received.

Sample input pattern:    111 345 hello  356 678 111 999 bye 165 done
output: the smallest is 111 the largest is 999 
Hint: Explore the usage of atoi function 
Don’t use integer array !!!!!!
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int val, max=-9999,min=9999;
    printf("Enter the string: ");
    while(1)
    {
        scanf("%s",s);
        val=atoi(s);
        if(!strcmp(s,"done"))
        {
            printf("Max: %d\nMin: %d\n",max,min);
            exit(0);
        }
        if(val==0)
            continue;
        else
        {
            if(val>max)
                max=val;
            if(val<min)
                min=val;
        }
    }
}
