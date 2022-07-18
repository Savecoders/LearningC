
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string usuario;
    float lectura_anterior, lectura_actual, consumo, exceso, precio;
    cout<<"Ingrese el nombre del usuario \n";
    cin>>usuario;
    cout<<"Ingrese los kwh de la leactura anterior: ";
    cin>>lectura_anterior;
    cout<<" Ingrese los kwh de la lectura actual: ";
    cin>>lectura_actual;

    consumo = lectura_actual - lectura_anterior;

    if (consumo <= 100)
    {

        precio = consumo * 0.25;
    }
    else
    {
        if (consumo > 100 && consumo <= 200)
        {
            exceso = consumo - 100;
            precio = (100 * 0.25) + (exceso * 0.35);
        }
        else
        {
            exceso = consumo - 200;

            precio = (100 * 0.25) + (100 * 0.35) + (exceso * 0.45);
        }
    }
    cout << "\t CENEL";
    cout << "\t *Empresa Electrica Nacional";
    cout << "\n Estimado " << usuario;
    cout << "\n con una lectuara anterior de: " << lectura_anterior << "kwh";
    cout << "\nY con una lectura actual de: " << lectura_actual << "kwh";
    cout << "\n Con un consumo de: " << consumo << "kwh";
    cout << "\n debe realizar un pago total de: " << precio;
}