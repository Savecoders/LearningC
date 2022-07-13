
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    double salario, utilidad_neta, tiempo_trabajado;

    cout << "Ingrese su salario: ";
    cin >> salario;

    cout << "Ingrese el tiempo que lleva en el trabajo: ";
    cin >> tiempo_trabajado;

    if (tiempo_trabajado > 0 && tiempo_trabajado <= 1)
    {
        utilidad_neta = salario * 0.07;
    }
    else if (tiempo_trabajado > 1 && tiempo_trabajado <= 5)
    {
        utilidad_neta = salario * 0.09;
    }
    else if (tiempo_trabajado > 5 && tiempo_trabajado <= 10)
    {
        utilidad_neta = salario * 0.11;
    }
    else
    {
        utilidad_neta = salario * 0.15;
    }

    cout<<"Su utilidad neta es de: "<<utilidad_neta;

    cout<<"Su utilidad en 12 meses seria: "<<(utilidad_neta * 12);


    return 0;
}
