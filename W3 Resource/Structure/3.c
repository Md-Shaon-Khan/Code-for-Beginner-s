#include<stdio.h>
#include<string.h>
struct books
{
    char name[100];
    char author[100];
    int price;
};

int main()
{

    struct books book_1,book_2,book_3;
    
    scanf("%s",&book_1.name);
    scanf("%s",&book_1.author);
    scanf("%d",&book_1.price);

    scanf("%s",&book_2.name);
    scanf("%s",&book_2.author);
    scanf("%d",&book_2.price);

    scanf("%s",&book_3.name);
    scanf("%s",&book_3.author);
    scanf("%d",&book_3.price);

   if(book_1.price > book_2.price && book_1.price > book_3.price)
      printf("Expensive book first one");
    else if(book_2.price > book_3.price && book_3.price > book_1.price)
      printf("Expensive book second one");
    else if(book_3.price > book_1.price && book_3.price > book_2.price)
      printf("Expensive book third one");

    printf("\nFirst book information ,,");
    printf("\nName   :%s",book_1.name);
    printf("\nAuthor :%s",book_1.author);
    printf("\nPrice  :%d",book_1.price);
    
    printf("\nSecond book information ,,");
    printf("\nName   :%s",book_2.name);
    printf("\nAuthor :%s",book_2.author);
    printf("\nPrice  :%d",book_2.price);

    printf("\nThird book information ,,");
    printf("\nName   :%s",book_3.name);
    printf("\nAuthor :%s",book_3.author);
    printf("\nPrice  :%d",book_3.price);


    return 0;
}