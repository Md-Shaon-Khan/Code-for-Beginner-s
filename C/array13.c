#include<stdio.h>
int main()
{
    int n,insert;

    printf("Input the size of array :");
    scanf("%d",&n);

    int array[n];

    for(int i=0;i<n;i++)
    {
        printf("Element - [%d] :",i+1);
        scanf("%d",&array[i]);
    }

    printf("Input the value to be inserted :");
    scanf("%d",&insert);

    for(int i=0;i<=n;i++)
    {
        if(insert < array[i])
        {
            for(int j=i;j<=n;i++)
            {
                array[j+1] = array[j];
            }
            array[i] = insert;
            break;
        }
    }

    printf("After Insert the list is :");
    for(int i=0;i<=n;i++)
    {
        printf("%d\t",array[i]);
    }



    return 0;
}
