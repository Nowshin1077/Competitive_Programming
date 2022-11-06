#include<bits/stdc++.h> 
using namespace std;
 
int main() {
 
   int days;
   int years = 0, months = 0;
   cin >> days; 

   years = days / 365;
   days = days % 365;
   
   months = days / 30;
   days = days  % 30;

   cout << years << " ano(s)\n" << months << " mes(es)\n" << days << " dia(s)\n" << endl;

    return 0;
}