#include <iostream>
using namespace std;
void main(){
    double val1,val2,val3,suma,promedio,producto;
    cout <<"Ingrese el valor 1: ";cin>>val1;
    cout <<"Ingrese el valor 2: ";cin>>val2;
    cout <<"Ingrese el valor 3: ";cin>>val3;
    suma=val1+val2+val3;
    producto=val1*val2*val3;
    promedio=suma/3;
    cout<<"La suma es de: "<<suma<<endl;
    cout<<"El producto es de: "<<producto<<endl;
    cout<<"El promedio es de: "<<promedio<<endl;
}