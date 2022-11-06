#include<bits/stdc++.h> 
 
using namespace std;
 
int main() {
 
   int x,y;

   cin >> x >> y; 
  
   double Spent = (x * y) / 12.0;

   cout << fixed;
   cout << setprecision(3)<<  Spent << endl;

    return 0;
}