#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,result;
    scanf("%d %d",&a,&b);
    result=(pow(a,b)-pow(b,a));
    printf("\n%d",result);

    return 0;
}
