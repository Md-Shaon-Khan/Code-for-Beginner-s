
#include<stdio.h>
#include<string.h>
int main()
{
    char name[50];

    fgets(name,sizeof(name),stdin);

    int length = strlen(name);

    for(int i=0;i<length;i++)
    {

        for(int j=i+1;j<length;j++)
        {
            if(name[i]==name[j])
            {
                for(int k=j;k<length;k++)
                {
                    name[k] = name[k+1];
                }
                length--;
            }
        }
    }

    printf("%s",name);









    return 0;
}
