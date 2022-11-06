#include<stdio.h>
int main()
{
    int t;
    float r,n,result;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%f %f",&r,&n);
        result=(((3.14*r*r)/n)*2)/(3.14*r*r);
        printf("Case %d : %.6f\n",i+1,result);
    }
    return 0;
}
