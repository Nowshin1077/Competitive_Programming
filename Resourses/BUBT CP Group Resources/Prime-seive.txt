#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,i;
    while(scanf("%d %d",&n,&a)!=EOF)
    {
    int sum=0;
    for(i=1;i<=n;i++)
    {
    sum+=i*pow(a,i);
    }
    cout<<sum<<endl;
    }
    return 0;
}
