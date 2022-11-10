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
#include <string>

using namespace std;

int main()
{
    int n, x(0);
    cin >> n;

    string s;
    while (n--)
    {
        cin >> s;
        if (s[1] == '+')
        {
            ++x;
        }
        else
        {
            --x;
        }
    }

    cout << x << endl;
    return 0;
}
