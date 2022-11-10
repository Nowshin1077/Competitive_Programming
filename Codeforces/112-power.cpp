#include <bits/stdc++.h>
using namespace std;

int main() {

  int a,b,res,p1,p2;
   
   cin>> a >> b;
   
   p1 = pow(a,b);
   p2 = pow(b,a);
   
   res = p1 -p2;
   cout << res <<endl;
	return 0;
} 