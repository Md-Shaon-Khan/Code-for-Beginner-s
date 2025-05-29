
#include<stdio.h>

int twice( int x)

{

x=x+x;

return x;

}

int main()

{

int x=10,y;

y=twice(x);

printf("%d,%d\n",x,y);

}
