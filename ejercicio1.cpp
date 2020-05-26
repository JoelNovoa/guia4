#include <iostream>

using namespace std;

int main(){
    int pn, sn,resultado;
    cout<<"ingrese el primero numero: ";
    cin>>pn;
    cout<<"ingrese el segundo numero: ";
    cin>>sn;
    
    resultado=pn/sn;

    if (resultado%2==0)
    {
        cout<<"los numeros son divisibles";

    }else
    {
        cout<<"los numeros no son divisibles";
    }
    
}