#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long n;
    int last1=0,last2=0;

        while(scanf("%lld",&n)!=EOF)
        {
            if(n>=1 && n<=10^9)
            {
               long long temp=n*n;
               last1=n%10;
               last2=temp%10;
                if(last1==last2)
                   {
                       printf("Yes Pagla\n");
                   }
               else
               {
                  printf("No Pagla\n");
               }
            }
        }
}
