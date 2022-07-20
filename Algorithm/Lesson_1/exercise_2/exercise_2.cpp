
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){

    float numero1, numero2, result;
    char option;
    
    cout<<"Ingrese un numero: ";
    cin>>numero1;

    cout<<"Ingrese otro numero: ";
    cin>>numero2;

    cout<<"\n**************Menu**************\n";
    cout<<"*********************************\n";
    cout<<"* +. suma\n";
    cout<<"* -. resta\n";
    cout<<"* *. numtiplicacion\n";
    cout<<"* /. division\n";
    cout<<"*********************************\n";
    
    cout<<"Ingrese la opcion que necesite: ";
    cin>>option;

    switch (option)
    {
        case '+':
            result = numero1 + numero2;
            break;
            
        case '-':
            result = numero1 - numero2;
            break;

        case '*':
            result = numero1 * numero2;
            break;

        case '/':
            result = numero1 / numero2;
            break;

        default:
            cout<<"Algo fallo.\n";
            result = 0;
            break;
    }
    cout<<"El resultado de la operacion es: "<<result;
    
    return 0;
}
