/*আপনি দেখতে পাচ্ছেন যে আউটপুটটি 3 মান হারিয়েছে, তবে
*for loop iterate যদিও num এর মান 0 থেকে 6।
*এর কারণ হল আমরা লুপের ভিতরে এমনভাবে একটি শর্ত সেট করেছি,
*যাতে কন্টিনিউ স্টেটমেন্টের সম্মুখীন হয় যখন num মান 3 এর সমান।
*তাই এই পুনরাবৃত্তির জন্য লুপটি cout স্টেটমেন্ট এড়িয়ে যায় এবং লুপের পরবর্তী পুনরাবৃত্তি শুরু করে।*/
#include<iostream>
#include<CONIO.h>
using namespace std;
int main()
{
    for(int num=0;num<=6;num++)
    {
       /* This means that when the value of
       * num is equal to 3 this continue statement
       * would be encountered, which would make the
       * control to jump to the beginning of loop for
       * next iteration, skipping the current iteration
       */
       if(num==2)
       {
           continue;
       }
       cout<<num<<"  ";
    }

    getch();
}
