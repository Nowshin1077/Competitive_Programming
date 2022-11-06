#include<stdio.h>
int main()
{
    int sum=0,a,b;
    while(scanf("%d%d",&a,&b)==2)
    {
        if(a<=100 && b<=100)
        {
        sum=a+b;
        printf("%d\n",sum);
        }
    }
    return 0;
}
