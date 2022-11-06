#include<stdio.h>

int main(){

    int T,i,N;

    scanf("%d",&T);

    for(i=1;i<=T;i++)

    {
    scanf("%d", &N);
    if (N > 0)
        printf("POSITIVE\n", N);
    else if (N < 0)
         printf("NEGATIVE\n", N);
    else
        printf("ZERO\n", N);

}
return 0;
}
