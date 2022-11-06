#include<stdio.h>
#include<math.h>
int main(){

    int T,i,n,m,res;

    scanf("%d",&T);

    for(i=1;i<=T;i++)
{
	scanf("%d %d",&n,&m);
	res =((pow(n,m))%(pow(10,9)+7));
	printf("%d\n",res);

}
return  0;
}
