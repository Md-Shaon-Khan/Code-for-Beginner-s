
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size : ");
    scanf("%d",&n);

    int array[n];
    printf("Elements are : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    int delete;
    printf("Which position number you want to delete : ");
    scanf("%d",&delete);
    int arr[5];
    arr[0] = array[delete-1];

    for(int j=delete-1;j<n;j++)
    {
        array[j] = array[j+1];

    }
    printf("After delete the postion ,,\nArray : ");
    for(int j=0;j<n-1;j++)
    {
        printf("%d  ",array[j]);
    }
    printf("\nDeleting number : %d",arr[0]);


    return 0;
}
