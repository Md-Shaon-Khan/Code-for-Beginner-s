#include<stdio.h>
int main()
{

    int n,k,l,c,d,p,nl,np;
    int ans;

    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);

    int total_drinks = k*l;
    int each_total_drinks = total_drinks / n;

    int total_limes = c*d;

    int total_salts = p/np;

    if(each_total_drinks<total_limes && each_total_drinks<total_salts)
    {
      ans = each_total_drinks/n;
    }
    else if(total_limes<each_total_drinks && total_limes<total_salts)
    {
      ans = total_limes/n;
    }
    else
    {
      ans = total_salts/n;
    }

    printf("%d",ans);











    return 0;
}
