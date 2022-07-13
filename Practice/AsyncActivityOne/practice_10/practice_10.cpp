
#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    double valor_hectaria, precio_neto, precio_final;
    string nombre;
    double descuento = 0;
    int tarifa, hectarias;
    
    cout<<"Ingrese su nombre: ";
    cin>>nombre;
    cout<<"Ingrese la cantidad de hectarias:";
    cin>>hectarias;
    cout<<"*************************************************************\n";
    cout<<" Lista de Tarifas \n";
    cout<<"*************************************************************\n";
    cout<<" 1: Fumigación contra las malas hierbas $10 por hectárea.\n";
    cout<<" 2: Fumigación contra langostas $20 por hectárea.\n";
    cout<<" 3: Fumigación contra gusanos $30 por hectárea.\n";
    cout<<" 4: Fumigación contra todo lo anterior $50 por hectárea.\n";
    cout<<"Leccione la tarrifa que desee:";
    cin>>tarifa;

    switch (tarifa)
    {
    case 1:
        valor_hectaria =  10;
        break;
    
    case 2:
        valor_hectaria =  20;
        break;

    case 3:
        valor_hectaria =  30;
        break;

    case 4:
        valor_hectaria =  40;
        break;
    
    default:
        cout<<"No seleciono ninguna opcion validad, el valor de la hectaria sera de 10$:";
        valor_hectaria =  10;
        break;
    }

    precio_neto = (valor_hectaria*hectarias);
    
    
    if(hectarias>500){
        descuento += 0.05;
    }

    if(precio_neto>1500){
        descuento += 0.1;
    }

    precio_final = precio_neto - (precio_neto*descuento);
    cout<<"El precio final por las "<<hectarias<<" hectarias es: "<<precio_final;


    return 0;
}
