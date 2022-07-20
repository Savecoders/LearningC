
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    int numero, opciones;

    int count_primo = 0;

    cout << "Ingrese el numero: ";
    cin >> numero;

    cout << "****************************************************************\n";
    cout << "* Menu \n";
    cout << "* 1. Verificar si el numero es Primo \n";
    cout << "* 2. Verificar si el numero es Par o impar \n";
    cout << "* 3. Verificar si el numero es Positivo, negativo o neutro \n";
    cout << "* 4. Salir del menu de opciones\n";
    cout << "* Ingrese la opcion que quiere: ";
    cin >> opciones;

    switch (opciones)
    {

    case 1:

        if (numero == 1)
        {

            cout << "No es considerado ni primo ni no primo, es compuesto";
        }
        for (int i = 0; i < numero; i++)
        {

            if (numero % i == 1)
            {
                count_primo++;
            }
        }

        if (count_primo == 2)
        {

            cout << "El numero si es primo";
        }
        else
        {

            cout << "El numero no es primo";
        }
        break;

    case 2:

        if (numero % 2 == 0)
        {

            cout << "El numero es par";
        }
        else
        {

            cout << "El numero es impar";
        }

        break;

    case 3:

        if (numero == 0)
        {

            cout << "El numero es neutral";
        }
        else if (numero > 0)
        {

            cout << "El numero es positivo";
        }
        else
        {

            cout << "El numero es negativo";
        }

        break;

    case 4:

        cout << "Que tenga un buen dia";
        break;

    default:

        cout << "La opcion es incorrecta, Que tenga un buen dia";
        break;
    }

    return 0;
}
