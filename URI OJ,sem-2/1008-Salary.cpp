#include<bits/stdc++.h> 
 
using namespace std;
 
int main() {
 
   int A, Number;
   double B,SALARY=0;

   cin >> Number >> A >> B; 
   SALARY = A * B;
   
   cout << "NUMBER = " << Number << endl;
   cout << fixed;
   cout << setprecision(2)<<"SALARY = U$ "<< SALARY << endl;

    return 0;
}