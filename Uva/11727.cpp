#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t,a,b,c;

  cin >> t;
  for (int i = 1; i <= t; i++){
    cin >> a >> b >> c;
    if (a > b ) 
    cout << "<" <<endl;
    else if (a > b)
    cout << ">" <<endl;
    else 
    cout << "=" <<endl;
  }
   return 0;
}
