#include<stdio.h>

int main(){

    int T,a,b,i,sum;

    scanf("%d",&T);

    for(i=1;i<=T;i++)

    {

        scanf("%d%d",&a,&b);

        sum = a*b;

        printf("%d\n",sum);

    }

    return 0;

}
