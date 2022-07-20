
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    
    int cantidad_de_alumnos;
    string mujeres, hombres;

    cout << "Ingrese la cantidad de alumnos de la lista: ";
    cin >> cantidad_de_alumnos;

    for (int i = 0; i < cantidad_de_alumnos; i++){

        int edad, ojos_opciones, cabello_opciones;
        float estatura, peso;
        string sexo, ojos, cabello, nombre;
        
        cout << "Ingrese el nombre del alumno: ";
        cin >> nombre;

        cout << "Ingrese el sexo del conductor en minusculas: ";
        cin >> sexo;

        cout << "Ingrese la edad del alumno: ";
        cin >> edad;

        cout<< "Ingrese la estatura del alumno:";
        cin >> estatura;

        cout<< "Ingrese la peso del alumno:";
        cin >> peso;

        cout<< "*****Color de Ojos*****:\n";
        cout<< "1. Azules\n";
        cout<< "2. Castanio\n";
        cout<< "3. Los demas colores\n";
        cout<< "Escriba la opcion:";
        cin >> ojos_opciones;

        switch (ojos_opciones){
            case 1:
                ojos = "Azules";
                break;
            
            case 2:
                ojos = "Castanio";
                break;

            case 3:
                ojos = "Los demas colores";
                break;

            default:
                cout<<"Algo fallo, por default seria los demas colores.\n";
                ojos = "Los demas colores";
                break;
        }


        cout<< "****Color de Cabello****:\n";
        cout<< "1. Castanio\n";
        cout<< "2. Rubio\n";
        cout<< "3. Los demas colores\n";
        cout<< "Escriba la opcion:";
        cin >> cabello_opciones;

        switch (cabello_opciones){
            case 1:
                cabello = "Castanio";
                break;
            
            case 2:
                cabello = "Rubio";
                break;

            case 3:
                cabello = "Los demas colores";
                break;

            default:
                cout<<"Algo fallo, por default seria los demas colores.\n";
                cabello = "Los demas colores";
                break;
        }

        if(sexo =="femenino" && cabello == "Rubio" && ojos == "Azules" && peso < 55 && (estatura >= 1.65 && estatura <= 1.75) ){
            mujeres+= nombre + " ";
        }

        if(sexo =="masculino" && ojos == "Castanio" && estatura < 1.70 && (peso >= 60 && peso <= 70) ){
            hombres+= nombre + " ";
        }

    }
            
    cout<< "Nombres de las chicas que cumplen las condiciones: "<<mujeres<<" \n";
    cout<< "Nombres de las chicos que cumplen las condiciones: "<<hombres<<" \n";

    return 0;
}
