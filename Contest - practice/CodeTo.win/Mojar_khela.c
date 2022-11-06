#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    if(t<=1000)
    {
        for(int i=0;i<t;i++)
        {
            scanf("%d",&n);
            if(n%2==0)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
}
