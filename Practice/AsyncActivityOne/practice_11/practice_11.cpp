
#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    int numero_dia;
    string dia;

    cout<<"*************************************************************\n";
    cout<<" Lista de Dias \n";
    cout<<"*************************************************************\n";
    cout<<"ingrese un numero del 1-7 y le mostraremos su dia correspondiente:";
    cin>>numero_dia;

    switch (numero_dia)
    {
    case 1:
        dia =  "Lunes";
        break;
    
    case 2:
        dia =  "Martes";
        break;

    case 3:
        dia =  "Miercoles";
        break;

    case 4:
        dia =  "Jueves";
        break;

    case 5:
        dia =  "Viernes";
        break;

    case 6:
        dia =  "Sabado";
        break;
    
    case 7:
        dia =  "Domingo";
        break;
    
    default:
        cout<<"No seleciono ninguna opcion validad\n";
        dia = "No hay un dia a la semana para ese numero";
        break;
    }

    cout<<dia;
    return 0;
}
