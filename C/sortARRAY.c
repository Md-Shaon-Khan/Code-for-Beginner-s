#include<stdio.h>
void inputArray(int *ptr,int n)
{
    for (int i = 0; i <n; i++)
    {
      scanf("%d",&ptr[i]);
    }
    
}
void arraySort(int *ptr,int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(*(ptr+i)>*(ptr+j))
            {
                temp = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = temp;
            }

        }
    }
}
void printArray(int *ptr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d  ",ptr[i]);pasc
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];

    inputArray(array,n);

    arraySort(array,n);

    printArray(array,n);







    return 0;
}