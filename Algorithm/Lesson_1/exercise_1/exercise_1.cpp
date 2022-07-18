
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    double sueldo, incremento, sueldo_total;

    cout << "Ingrese su salario: ";
    cin >> sueldo;

    if (sueldo < 100000)
    {
        incremento = 0.15;
    }
    else if (sueldo >= 100000 && sueldo <= 1000000)
    {
        incremento = 0.08;
    }
    else
    {
        incremento = 0.03;
    }

    sueldo_total = sueldo + (sueldo*incremento);

    cout << "Tuvo un incremento de:"<<incremento<<"sueldo es ahora es de: "<<sueldo_total;
    
    return 0;
}
