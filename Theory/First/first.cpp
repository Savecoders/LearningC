#include <iostream>
using namespace std;

int main(){

    float numero1, numero2, suma, resta, multiplicacion, division;
    
    cout<<"Ingrese un numero: ";
    cin>>numero1;

    cout<<"Ingrese otro numero: ";
    cin>>numero2;

    if (numero1>0){
        cout<<"El primer numero es positivo \n";
    }else if (numero1 == 0){
        cout<<"El primer numero es neutro \n";
    }else{
        cout<<"El primer numero es negativo \n";
    }
    
    

    suma = numero1 + numero2;
    resta = numero1 - numero2;
    multiplicacion = numero1 * numero2;
    division = numero1 / numero2;

    cout<<"La resultado de la suma es: " <<suma <<"\n";
    cout<<"La resultado de la resta es: " <<resta <<"\n";
    cout<<"La resultado de la multiplicacion es: " <<multiplicacion <<"\n";
    cout<<"La resultado de la division es: " <<division <<"\n";
    

    return 0;

}
