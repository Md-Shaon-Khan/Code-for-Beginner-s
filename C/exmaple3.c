
#include<stdio.h>
#include<strings.h>
int main()
{
    char number[100];
    int i,count = 0;

    gets(number);

    int len = strlen(number);


        for(i=0;i<len;i++)
        {
            if(number[i]==number[i+1]  )
            {
                ++count;
            }
            else
            {
                 count = 0;
            }

        }



    if(count>= 7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }




    return 0;
}
