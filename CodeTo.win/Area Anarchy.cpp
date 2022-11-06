#include<stdio.h>
int main()
{
   int a,b,c,d,result,rem;
    while(scanf("%d %d",&a,&b)==2)
    {
        result=a*b;
        scanf("%d %d",&c,&d);
        rem=c*d;
        if(result%rem!=0)
        {
             printf("NO\n");
        }
        else
        {
           printf("YES\n");
        }

    }
}
