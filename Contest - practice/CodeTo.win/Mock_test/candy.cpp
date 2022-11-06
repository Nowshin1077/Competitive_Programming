#include<stdio.h>
int main()
{
	int T, i;
	scanf("%d", &T);

	for(i=1; i<=T; i++)
	{
	    int n, j, sum = 0;
	    scanf("%d", &n);
	    int a[n];

	    for(j=0; j<n; j++)
	    {
	        scanf("%d", &a[j]);
	    }

	    for(j=0; j<n; j++)
	    {
	        sum = sum + a[j];

	    }

	    printf("%d\n", sum);
	}
}
