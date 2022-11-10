#include<bits/stdc++.h>
using namespace std;
#define mx 1000
int vis[mx];
vector <int >prime;
void sieve()
{
    for(int  i=3; i*i<=mx; i+=2)
    {
        if(vis[i]==0)
        {
            for(int  j=i*i; j<=mx; j+=2*i)
            {
                vis[j]=1;
            }
        }
    }
    prime.push_back(2);
    for(int  i=3; i<=mx; i+=2)
    {
        if(vis[i]==0) prime.push_back(i);
        cout<<i<<endl;
    }

}
int main (){

  sieve();



}