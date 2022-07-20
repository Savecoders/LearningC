
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){

    const int Equipos = 10;
    const int Jugadores = 10;

    float peso_promedio_equipos = 0, edad_promedio_equipos = 0;
    
    for (int e = 1; e <= Equipos; e++){

        float peso_promedio_players = 0, peso_players;
        float edad_promedio_players = 0, edad_players;

        for (int j = 1; j <= Jugadores; j++){

            string nombre, apellido;
            float peso;
            int edad;

            cout<< "Ingrese el nombre del jugador ."<<j<<": ";
            cin >> nombre;

            cout<< "Ingrese el apellido del jugador ."<<j<<": ";
            cin >> apellido;

            cout<< "Ingrese el peso del jugador ."<<j<<": ";
            cin >> peso;

            cout<< "Ingrese la edad del jugador ."<<j<<": ";
            cin >> edad;

            peso_players +=  peso;
            edad_players +=  edad;

            cout<<"\n";
        }

        peso_promedio_players = peso_players/Jugadores;
        edad_promedio_players = edad_players/Jugadores;

        peso_promedio_equipos+= peso_promedio_equipos;
        edad_promedio_equipos+= edad_promedio_equipos;


        cout << "El promedio del peso del equipo ."<<e <<" es: "<<peso_promedio_equipos;
        cout << "El promedio de la edad del equipo ."<<e <<" es: "<<edad_promedio_equipos;
        cout << "\n";
        
    }


    peso_promedio_equipos /= (Equipos*Jugadores);
    edad_promedio_equipos /= (Equipos*Jugadores);


    cout << "El promedio del peso de todos es: "<<peso_promedio_equipos;
    cout << "El promedio de la edad de todos es: "<<edad_promedio_equipos;

    return 0;
}
