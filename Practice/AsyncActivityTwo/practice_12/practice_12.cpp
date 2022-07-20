
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    int estudiantes = 0, estudiantes_aprobados = 0, estudiantes_reprobados = 0,
        estudiante_recu = 0, promedio_estudiantes = 0;

    cout << "Ingrese la cantidad de estudiantes que dea tomar sus notas: ";
    cin >> estudiantes;

    for (int e = 1; e <= estudiantes; e++)
    {
        int notas, cantidad_notas = 0, promedio_notas = 0;
        cout << "Estudiante #" << e << ". \n";
        cout << "Ingrese la cantidad de notas que desea ingresar: ";
        cin >> notas;

        for (int n = 1; n <= notas; n++)
        {
            float nota;

            cout << "Ingrese la nota #" << n << ": ";
            cin >> nota;

            cantidad_notas += nota;
        }

        promedio_notas = cantidad_notas / notas;
        promedio_estudiantes+= promedio_notas;

        if (promedio_notas >= 7)
        {

            cout << "El estudiante aprobo \n";
            estudiantes_aprobados++;
        }
        else if (promedio_notas >= 4 && promedio_notas < 7)
        {

            cout << "El estudiante se quedo en recuperacion \n";
            estudiante_recu++;
        }
        else
        {

            cout << "El estudiante reprobo \n";
            estudiantes_reprobados++;
        }
    }

    promedio_estudiantes /= estudiantes;

    cout<<"El promedio del curso es: "<<promedio_estudiantes<<" \n";
    cout<<"Total de estudiantes aprobados son: "<<estudiantes_aprobados<<" \n";
    cout<<"Total de estudiantes pasaron a recuperacion son: "<<estudiante_recu<<" \n";
    cout<<"Total de estudiantes reprobados son: "<<estudiantes_reprobados<<" \n";



    return 0;
}
