
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    int gallinas;
    float kilo_total;

    cout << "Cantidad de gallinas: ";
    cin >> gallinas;

    for (int i = 1; i < gallinas; i++)
    {
        float peso, altura, calidad, kilo, porcentaje;
        int n_huevos;

        cout << "Ingrese el peso de la gallina #" << i << " : ";
        cin >> peso;

        cout << "Ingrese la altura de la gallina #" << i << " : ";
        cin >> altura;

        cout << "Ingrese el numero de huevo que pone la gallina #" << i << " : ";
        cin >> n_huevos;

        calidad = (peso * altura) / n_huevos;

        if (calidad >= 15)
        {
            porcentaje = 1.2;
        }
        else if (calidad > 8 && calidad < 15)
        {
            porcentaje = 1.0;
        }
        else
        {
            porcentaje = 0.8;
        }

        kilo = porcentaje * calidad;
        kilo_total+= kilo;

        cout<<"El precio del kilo de la gallina #"<<i<<" es "<<kilo<<"\n";

    }

    kilo_total /= gallinas;

    cout<<"El kilo total entre todas las gallinas es: "<<kilo_total;
    
    return 0;
}
