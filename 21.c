/*
4. Write a C program to  search a specified element in array of random elements.
if the search  is successful then,  the program should  display the following
1. Search is successful
2. the position of first occurrence
3. the position of the last occurrence
*/
#include<stdio.h>
int main()
{
    int n, arr[10], key;
    printf("Enter number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("The elements of array are:\n");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);

    printf("\nEnter key to be searched: ");
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            printf("Successful!\n");
            printf("First occurrence at position %d\n",i+1);
            break;
        }
    }

    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]==key)
        {
            printf("Last occurrence at position %d\n",i+1);
            exit(0);
        }
    }
    printf("Search Unsuccessful!\n");
}
