#include<stdio.h>

int main()
{
   long long t,i,e,d,k,count=0;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld%lld%lld",&e,&d,&k);
        printf("Case %lld: ",++count);
        if(d<=e)
        {
            printf("Foot\n");
        }
       else if(d<e*k)
        {
            printf("Rickshaw\n");
        }
        else
        {
            printf("Crying\n");
        }


    }
     return 0;
}
