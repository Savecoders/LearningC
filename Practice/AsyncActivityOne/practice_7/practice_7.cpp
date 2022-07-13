
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    double horas, valor_hora, horas_extras, sueldo;

    cout << "Ingrese la cantidad de horas: ";
    cin >> horas;

    cout << "Ingrese el valor por hora: ";
    cin >> valor_hora;

    if ( horas <= 40 ){
        sueldo = horas * valor_hora;
    }else {
        horas_extras = horas - 40;
        sueldo =  ((horas - horas_extras )* valor_hora) + (horas_extras * (valor_hora + (valor_hora * 0.5)));
    }

    cout<<"su sueldo es: "<<sueldo;
    
    /* code */
    return 0;
}
