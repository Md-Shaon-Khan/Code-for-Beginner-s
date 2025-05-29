
#include<stdio.h>
#include<string.h>
int main()
{
   int n,len,q1,w1,e1,r1,t1,y1,u1,i1,o1,p1,a1,s1,d1,f1,g1,h1,j1,k1,l1,z1,x1,c1,v1,b1,n1,m1,i;

   scanf("%d",&n);

   char s[n];
   for(i=0;i<n;i++)
   {

       scanf("%c",&s[i]);
   }

   strlwr(s);



   for(i=0;i<len;i++)
   {
      if(s[i] == 'a')
       a1 = 1;
      else if(s[i] == 'b')
       b1 = 1;
      else if(s[i] == 'c')
       c1 = 1;
      else if(s[i] == 'q')
       q1 = 1;
      else if(s[i] == 'w')
       w1 = 1;
      else if(s[i] == 'e')
       e1 = 1;
      else if(s[i] == 'r')
       r1 = 1;
      else if(s[i] == 't')
       t1 = 1;
      else if(s[i] == 'y')
       y1 = 1;
      else if(s[i] == 'u')
       u1 = 1;
      else if(s[i] == 'i')
       i1 = 1;
      else if(s[i] == 'o')
       o1 = 1;
      else if(s[i] == 'p')
       p1 = 1;
      else if(s[i] == 's')
       s1 = 1;
      else if(s[i] == 'd')
       d1 = 1;
      else if(s[i] == 'f')
       f1 = 1;
      else if(s[i] == 'g')
       g1 = 1;
      else if(s[i] == 'h')
       h1 = 1;
      else if(s[i] == 'j')
       j1 = 1;
      else if(s[i] == 'k')
       k1 = 1;
      else if(s[i] == 'l')
       l1 = 1;
      else if(s[i] == 'z')
       z1 = 1;
      else if(s[i] == 'x')
       x1 = 1;
      else if(s[i] == 'n')
       n1 = 1;
      else if(s[i] == 'v')
       v1 = 1;
      else if(s[i] == 'm')
       m1 = 1;



   }

   if(t1==1 && q1 == 1 && w1 == 1&& e1==1 && r1==1 && y1==1 && u1 == 1 && i1 == 1&& o1==1 && p1==1 &&a1==1 && s1 == 1 && d1 == 1&& f1==1 && g1==1 && h1==1 && j1 == 1 && k1 == 1&& l1==1 && z1==1 &&x1==1 && c1 == 1 && v1 == 1&& b1==1 && n1==1 && m1==1 )
      printf("YES");
      else
      printf("NO");

      return 0;
}

