#include <iostream>
#include <cmath>
using namespace std;
void main(){
    double x,y,z,a;
    cout<<"Ingese el primer valor: ";
    cin>>x;
    cout<<"Ingrese el segundo valor: ";
    cin>>y;
    z=pow(x*y/2,0.5);
    a=pow((x*x+y*y*y)/4*3,0.3333333333);
    cout<<"La raiz cuadrada es de: "<<z<<endl;
    cout<<"La raiz cubica es de: "<<a<<endl;
}