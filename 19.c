/*
**********************************************************************************
 Complete the following program using the tempalte
**********************************************************************************
#include <stdio.h>
void read_arr(     );
void print_arr(     );
void print_odd(    );
int main()
{
    // array declaration
    int arr[10], arr_size;
    printf("Enter the number of elements\n");
    scanf("%d", &arr_size);
    read_arr(arr, arr_size);
    printf("The array elements are \n");
    print_arr(arr, arr_size);
    printf("The  odd elements are\n");
    print_odd(arr, arr_size);
}
*/
#include <stdio.h>
void read_arr(int *, int);
void print_arr(int *, int);
void print_odd(int *, int);
int main()
{
    // array declaration
    int arr[10], arr_size;
    printf("Enter the number of elements\n");
    scanf("%d", &arr_size);
    printf("Enter the elements:\n");
    read_arr(arr, arr_size);
    printf("The array elements are \n");
    print_arr(arr, arr_size);
    printf("\nThe  odd elements are\n");
    print_odd(arr, arr_size);
}
void read_arr(int *arr, int n)
{
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
}
void print_arr(int *arr, int n)
{
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}
void print_odd(int *arr, int n)
{
    for(int i=0;i<n;i++)
        if(arr[i]%2!=0) printf("%d ",arr[i]);
}
