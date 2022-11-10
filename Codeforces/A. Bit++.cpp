/*#include<stdio.h>
int main()
{
	int n,X=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&X);
        res=++X
        if(res==++X);
        printf("++X\n");
    else
        printf("Odd\n");

    return 0;
}
*/

#include <iostream>
#include <cstdio>
#include<cstdlib>
#include <string>

using namespace std;

int main()
{
    string ch;
    int n;
    int x=0;
    cin >> n;
    while(n--){
        cin>>ch;
        if(ch[0]=='+' || ch[1]=='+'){
            x++;
        }
        else
            x--;
    }
    cout<< x <<endl;

    return 0;
}
