#include<stdio.h>
#include<string.h>
int main()
{
    int t,A,B;
    scanf("%d",&t);
    char array[15];
    while(t != 0)
    {


        scanf("%s",array);
        for(int i=0;i<5;i++)
        {
            if(array[i] == 'B')
            B++;

            else if(array[i]=='A')
            A++;


        }
        if(A>B) printf("A\n");
        else if(B>A) printf("B\n");

        A=0;
        B=0;


        t--;
    }


    return 0;
}
