
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int menu;
    cout << "*************************************************************\n";
    cout << " 1: Sacar el area de rectangulo.\n";
    cout << " 2: Sacar el area del cuadrado.\n";
    cout << " 4: Sacar el area del rombo.\n";
    cout << "Leccione la opcion que desee:";
    cin >> menu;

    switch (menu)
    {
    case 1:

        double area, base, altura;
        cout << "Ingrese la base del rectangulo: ";
        cin >> base;

        cout << "Ingrese la altura del rectangulo: ";
        cin >> altura;

        area = base * altura;

        cout << "El area del rectangulo es: " << area;

        break;

    case 2:

        double lado;

        cout << "Ingrese el lado del cuadrado: ";
        cin >> lado;

        cout << "El area del cuadrado es: " << lado * lado;
        break;

    case 3:

        double diagonal1, diagonal2;
        cout << "Ingrese el diagonal uno del rombo: ";
        cin >> diagonal1;

        cout << "Ingrese el diagonal dos del rombo: ";
        cin >> diagonal2;

        cout << "El area del rombo es: " << ((diagonal1 * diagonal2) / 2);
        break;
    }
    return 0;
}
