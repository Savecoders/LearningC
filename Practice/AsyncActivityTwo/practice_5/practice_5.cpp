#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{   
    int n_trabajadores;
    cout << "Ingrese la cantidad de trabajadores que desea ingresar: ";
    cin >> n_trabajadores;

    for (int i = 0; i < n_trabajadores; i++){

        double horas, valor_hora, horas_extras, sueldo;
        cout << "\n Trabajador numero: "<<i+1<<"\n";
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
    }
    
    
    /* code */
    return 0;
}
