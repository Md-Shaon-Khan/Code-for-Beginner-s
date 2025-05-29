#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);

    if(n <= a && n <= b)
      printf("YES");

    else
      printf("NO");



    return 0;
}