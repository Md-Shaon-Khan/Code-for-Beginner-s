#include<stdio.h>
int main()
{
  int x,y = 0;
  scanf("%d", &x);
  for( int i = 1; i<=x; i++)
  {
    if(x%i==0)
    printf("%d ",i);
    y = y + i;
  }
  printf("\n %d",y);
}
