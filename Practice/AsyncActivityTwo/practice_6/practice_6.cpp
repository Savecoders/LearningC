
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    
    float chofer_menores, conductoras, capital, conductores_limitados;
    int cantidad_de_conductores, count_conductores;

    cout << "Ingrese la cantidad de conductores que han sufrido accidentes: ";
    cin >> cantidad_de_conductores;

    do{
        int edad, codigo_de_seguridad;
        string sexo;
        
        cout << "Ingrese la edad del conductor ."<<count_conductores+1<<":";
        cin >> edad;
        
        cout << "Ingrese el sexo del conductor en minusculas: ";
        cin >> sexo;

        cout<< "Código de seguridad Digite 1 si es de capital o dos 2 si es de provincia :";
        cin >> codigo_de_seguridad;

        // conductores de capital
        if(codigo_de_seguridad==1){
            capital++;
        }

        if(edad<25){
            chofer_menores++;
        }

        if(sexo =="femenino"){
            conductoras++;
        }

        if(sexo =="masculino" && edad >= 18 && edad <=25){
            conductores_limitados++;
        }

        count_conductores++;

    } while (count_conductores<cantidad_de_conductores);
    
    chofer_menores = (chofer_menores/count_conductores) * 100;
    conductoras = (conductoras/count_conductores) * 100;
    conductores_limitados = (conductores_limitados/count_conductores) * 100;
    capital = (capital/count_conductores) * 100;


    cout<<"El porcentaje de conductores menores a 25 es: "<<chofer_menores<<"%\n";
    cout<<"El porcentaje de conductoras es de: "<<conductoras<<"%\n";
    cout<<"El porcentaje de conductores entre 18 a 25 es: "<<conductores_limitados<<"%\n";
    cout<<"El de conductores que son de la capital es de: "<<capital<<"%\n";
    return 0;
}
