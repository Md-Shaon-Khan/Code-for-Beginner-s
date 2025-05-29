#include <stdio.h>
int main() 
{
    int t;
    scanf("%d",&t);
    
    while(t--) 
    {
        int n, k;
        scanf("%d %d",&n,&k);
        int count = 0; 
        for(int i = 0; i < n; i++) 
        {
            int a; 
            scanf("%d", &a);
            
            if(a == k) 
            {
                count = 1; 
            }
        }
        if(count!=0) 
        {
            printf("YES\n"); 
        }
        else 
        {
            printf("NO\n");
        }
    }

    return 0;
}

