#include<bits/stdc++.h> 
 
using namespace std;
 
int main() {
 
   int A;
   float B,Div;
   
   cin >> A >> B ;

   Div = (A /B);

   cout << fixed;
   cout << setprecision(3) << Div <<" km/l"<< endl;
 
    return 0;
}