#include<stdio.h>
int main()
{
	int N,tks,sum=0;
    scanf("%d",&tks);
    for(int t=1; t<=tks; t++)
    {
        scanf("%d",&N);
        sum=sum+t;
    }
    if(sum%2==0)
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}
