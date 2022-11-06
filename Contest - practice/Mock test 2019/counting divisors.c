#include<stdio.h>
#include<math.h>
int main()
{
   int t,i,j,N,Res,num,result,count=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        printf("Case %d: ",++count);


int result = 0;


    for (int i=2; i<=sqrt(num); i++)
    {

        if (num%i==0)
        {

            if (i==(num/i))
                result += i;
            else
                result += (i + num/i);
        }
    }
}
printf("%d",result);
    return 0;
}
