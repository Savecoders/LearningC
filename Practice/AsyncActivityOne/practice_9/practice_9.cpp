
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string nombre;
    double lectura_anterior, lectura_actual, consumo, precio;

    cout << "Ingrese su nombre: ";
    cin>>nombre;

    cout << "Ingrese la lectura anteior: ";
    cin >> lectura_anterior;

    cout << "Ingrese la lectura actual: ";
    cin >> lectura_actual;

    consumo = lectura_actual - lectura_anterior;

    if(consumo <= 100){
    
        precio = consumo * 0.25;
    
    }else if(consumo > 100 && consumo <= 200){

        double exeso = consumo - 100;
        
        precio = (100 * 0.25) + (exeso * 0.35 );

    }else{

        double exeso = consumo - 200;
        
        precio = (100 * 0.25) + (100 * 0.35 ) + + (exeso * 0.45 );

    }
    cout<<"*******************************************"<<"\n";
    cout<<"*                  Factura                *"<<"\n";
    cout<<"*******************************************"<<"\n";
    cout<<"Nombre del usuario: "<<nombre<<"\n";
    cout<<"Lectura anterior: "<<lectura_anterior<<"\n";
    cout<<"Lectura actual: "<<lectura_actual<<"\n";
    cout<<"Valor total a pagar es de: "<<precio<<"\n";


    /* code */
    return 0;
}
