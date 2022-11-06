#include<stdio.h>
int main()
{
    int N[1000],tks,result;
    long long F;
    scanf("%d",&tks);
    for(int t=0; t<tks; t++)
     {
        scanf("%d",&N[t]);
     }
    for(int t=0; t<tks; t++)
     {
        result=0;
        for(int k=2; k<=N[t]; k++)
        {
         F=((k*(26*k+3))+(7*k)-((k+1)*5)-(5*k))%1000000007;
         result=result+F;
        }
        result=(1+result);
        printf("%d\r\n",result);
    }
    return 0;
}
