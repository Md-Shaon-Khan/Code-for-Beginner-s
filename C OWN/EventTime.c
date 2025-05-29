#include<stdio.h>
int main()
{
    int d1,d2,h1,h2,m1,m2,s1,s2;

    printf("Starting day :");
    scanf("%d" , &d1);
    printf("Starting hour : minute : secs  =" );
    scanf("%d %d %d" , &h1 , &m1 , &s1 );

    printf("Finishing day :");
    scanf("%d" , &d2);
    printf("Finishing hour : minute : secs  =" );
    scanf("%d %d %d" , &h2 , &m2 , &s2 );

    s2 = s2 - s1 ;
    m2 = m2 - m1 ;
    h2 = h2 - h1 ;
    d2 = d2 - d1 ;


    if(s2<0)
    {
        s2 = s2 + 60 ;
        m2--;
    }
    if(m2<0)
    {
        m2 += 60 ;
        h2--;
    }
    if(h2<0)
    {
        h2 += 24 ;
        d2--;
    }


    printf("\n\n%d Days passing\n" , d2);

    printf("%d hour :%d minute :%d secs\n" , h2 , m2 , s2);






















    getch();
}
