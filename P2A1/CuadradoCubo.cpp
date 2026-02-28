#include <iostream>
#include <cmath>
using namespace std;
void main(){
    double r3,r2,c2,c3,num,frac;
    frac=0.3333333333333333333333;
    cout<<"Ingrese el numero: ";
    cin>>num;
    r3=pow(num,frac);
    r2=pow(num,0.5);
    c2=pow(num,2);
    c3=pow(num,3);
    cout<<"Raiz cubica: "<<r3<<endl;
    cout<<"Raiz cuadrada: "<<r2<<endl;
    cout<<"Elevado al cuadrado: "<<c2<<endl;
    cout<<"Elevdado al cubo: "<<c3<<endl;
}