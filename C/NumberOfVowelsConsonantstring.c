#include<stdio.h>
int main()
{

    char str[100],ch;
    int i,vowel,consonant,digit,word,other;

    printf("Enter a digit :");
    gets(str);

    i=vowel=consonant=word=digit=other=0;

    while((ch=str[i]) != '\0')
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'||
           ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
           vowel++;

        else if(ch>='a' && ch<='z'||ch>='A' && ch<='Z')
            consonant++;

        else if(ch>='0' && ch<='9')
            digit++;
        else if(ch==' ')
            word++;
        else
            other++;

        i++;
    }
    word++;

    printf("number of vowels =%d\n" , vowel);
    printf("number of consonant =%d\n" , consonant);
    printf("number of words =%d\n" , word);
    printf("number of digits =%d\n" , digit);
    printf("number of othres =%d\n" , other);








    getch();
}
