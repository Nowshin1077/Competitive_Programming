#include<stdio.h>
int main()
{
    int i,j;
    long long x,arr[6],rem;
    long long temp;
    while(scanf("%lld",&temp)==1)
    {
        if(temp>=100000 && temp<=999998)
        {
            x=++temp;
            for(;;)
            {
                for(i=5; i>=0; i--)
                {
                    arr[i]=x%10;
                    x=x/10;
                }

                if(arr[0]+arr[1]+arr[2]!=arr[3]+arr[4]+arr[5])
                {
                    x=++temp;
                }
                else
                    break;
            }
            for(i=0; i<6; i++)
            {
                printf("%lld",arr[i]);
            }
            printf("\n");
        }
    }


}
