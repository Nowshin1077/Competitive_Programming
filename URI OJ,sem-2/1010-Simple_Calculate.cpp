#include<bits/stdc++.h> 
 
using namespace std;
 
int main() {
 
   int a1,b1,a2,b2;
   double c1,c2,Value = 0;

   cin >> a1 >> b1 >> c1; 
   cin >> a2 >> b2 >> c2;

   Value = (b1 * c1) + (b2 * c2);

   cout << fixed;
   cout << setprecision(2)<<"VALOR A PAGAR: R$ "<< Value << endl;

    return 0;
}

// 12 1 5.30
// 16 2 5.10