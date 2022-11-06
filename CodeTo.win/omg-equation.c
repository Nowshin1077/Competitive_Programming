#include<stdio.h>
int main()
{
    int a,b,n,result;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        result=(9*((a+b)*(a+b))+(4*a)+(5*b)+((a*b)*(a*b)));
        printf("%d\n",result);
    }

}
