#include<stdio.h>
int main()
{
    int notes,OneThousands,ExtraOneThousands,FiveHundreds,ExtraHundreds;
    int TwoHundreds,ExtraTwoHundreds,OneHundreds,ExtraOneHundreds,FiftyTaka,ExtraFiftyTaka;
    int TweentyTaka,ExtraTweentyTaka,TenTaka,ExtraTenTaka,FiveTaka,ExtraFiveTaka;
    int TwoTaka,ExtraTwoTaka,OneTaka;


    printf("Enter your Money for exchange :");
    scanf("%d" , &notes);

    OneThousands = notes / 1000 ;
    ExtraOneThousands = notes % 1000 ;

    FiveHundreds = ExtraOneThousands / 500 ;
    ExtraHundreds = ExtraOneThousands % 500 ;

    TwoHundreds = ExtraHundreds / 200 ;
    ExtraTwoHundreds = ExtraHundreds % 200 ;

    OneHundreds = ExtraTwoHundreds / 100 ;
    ExtraOneHundreds = ExtraTwoHundreds % 100 ;

    FiftyTaka = ExtraOneHundreds / 50 ;
    ExtraFiftyTaka = ExtraOneHundreds % 50 ;

    TweentyTaka = ExtraFiftyTaka / 20 ;
    ExtraTweentyTaka = ExtraFiftyTaka % 20 ;

    TenTaka = ExtraTweentyTaka / 10 ;
    ExtraTenTaka = ExtraTweentyTaka % 10 ;

    FiveTaka = ExtraTenTaka / 5 ;
    ExtraFiveTaka = ExtraTenTaka % 5 ;

    TwoTaka = ExtraFiveTaka / 2 ;
    ExtraTwoTaka = ExtraFiveTaka % 2;

    OneTaka = ExtraTwoTaka / 1 ;


    printf("Total notes of 1000 TAKA  :%d\n" ,OneThousands);
    printf("Total notes of 500 TAKA   :%d\n" ,FiveHundreds);
    printf("Total notes of 200 TAKA   :%d\n" ,TwoHundreds);
    printf("Total notes of 100 TAKA   :%d\n" ,OneHundreds);
    printf("Total notes of 50 TAKA    :%d\n" ,FiftyTaka);
    printf("Total notes of 20 TAKA    :%d\n" ,TweentyTaka);
    printf("Total notes of 10 TAKA    :%d\n" ,TenTaka);
    printf("Total notes of 5 TAKA     :%d\n" ,FiveTaka);
    printf("Total notes of 2 TAKA     :%d\n" ,TwoTaka);
    printf("Total notes of 1 TAKA     :%d\n" ,OneTaka);



    getch();
}
