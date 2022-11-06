#include<stdio.h>

int main(){

    int i,T,R1,R2,R3,res,count=0;

    scanf("%d",&T);

    for(i=1;i<=T;i++)
{
       scanf("%d %d %d ",&R1,&R2,&R3);
       printf("Case %d: ",++count);
       res=((3*3.1416*R1*R1)/3.1416*R1*R1);
printf("%d",res);
}

  return 0;
}
