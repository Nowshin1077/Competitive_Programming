#include<bits/stdc++.h> 
using namespace std;

int main() {
int A,B,C,s;


cin >> A >> B >> C;

int MaiorAB = (A + B + abs(A - B))/2;
int MAX = (MaiorAB + C + abs(MaiorAB - C))/2;
cout << MAX <<" eh o maior" << endl;

    return 0; 
    
 }   