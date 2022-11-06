#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,T,result;
    long long n;
    scanf("%d",&T);
    for(i=0; i<T; i++)
    {
        scanf("%lld",&n);
        result=1;
        for(j=2; j<=n; j++)
        {
            result=result+(j*(26*j+3))+(7*j)-((j+1)*5)-(5*j);
        }
        printf("%d\n",result);
    }
}
