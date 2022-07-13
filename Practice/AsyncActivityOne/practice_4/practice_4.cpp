
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    
    double sueldo, venta_uno, venta_dos, venta_tres, ingresos_totales ;
    
    cout<<"Ingrese el sueldo: ";
    cin>>sueldo;

    cout<<"Ingrese el valor del primer articulo vendido: ";
    cin>>venta_uno;

    cout<<"Ingrese el valor del segundo articulo vendido: ";
    cin>>venta_dos;

    cout<<"Ingrese el valor del tercero articulo vendido: ";
    cin>>venta_tres;

    ingresos_totales = (sueldo + ((venta_uno+venta_dos+venta_tres)*0.3));

    cout<<"El valor a recibir es de: "<<ingresos_totales;

    return 0;
}
