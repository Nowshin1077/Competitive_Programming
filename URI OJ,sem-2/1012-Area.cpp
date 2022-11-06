#include<bits/stdc++.h> 
#define pi 3.14159
using namespace std;

int main() {
double A,B,C;


cin >> A >> B >> C;

//Areas calculation
double  rt = 0.5 * A * C; // (1/2 * A * C)
double  circle =  pi * (C * C);
double  trapezium = (A + B)/ 2 * C;
double  square = B * B;
double  rectangle = A * B;

cout << fixed;
    cout << setprecision(3)<<"TRIANGULO: "<<rt<<endl;
    cout << setprecision(3)<<"CIRCULO: "<<circle<<endl;
    cout << setprecision(3)<<"TRAPEZIO: "<<trapezium<<endl;
    cout << setprecision(3)<<"QUADRADO: "<<square<<endl;
    cout << setprecision(3)<<"RETANGULO: "<<rectangle<<endl;
      

    return 0; 
    
 }   