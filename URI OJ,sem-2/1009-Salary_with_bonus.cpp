#include<bits/stdc++.h> 
 
using namespace std;
 
int main() {
 
   char N[20];
   double A,B,C;
   
   cin >> N;
   cin >> A >> B;

   C = A + (B * .15);

   cout << fixed;
   cout << setprecision(2)<< "TOTAL = R$ " << C << endl;
 
    return 0;
}