#include<stdio.h>
int main()
{
    int a[30], i, n=100,min;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
    min= a[0];
    for (i = 1; i<=n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("%d\n",min);

    return (0);
}
