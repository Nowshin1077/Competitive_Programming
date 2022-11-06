#include<stdio.h>

int main()
{

    int T,i,d,e,k;

    scanf("%d",&T);


    for(i=1; i<=T; i++)

    {
        scanf("%d %d %d",&d,&e,&k);

        if(d<=e)
        {
            printf("Foot");
        }



        else if(d<e*k)
            ;
        {
            printf("Rickshaw");
        }



        else
        {
            printf("crying");
        }



    }

    return 0;

}
