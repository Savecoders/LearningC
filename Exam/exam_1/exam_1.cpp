
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    float ingresos, enganche, hipoteca, hipoteca_neto, mensualidad, enganche_total;
    float anios = 0;

    cout << "Empresa de bienes raices\n";

    cout << "Ingrese los ingresos del comprador: ";
    cin >> ingresos;

    cout << "Ingrese el valor de la vivienda que desea el comprador: ";
    cin >> hipoteca;


    if (ingresos < 8000)
    {
        enganche = 0.15;
        anios = 10;
    }else if( ingresos >= 8000){

        enganche = 0.30;
        anios = 7;
    }


    enganche_total = (enganche * hipoteca);
    hipoteca_neto = hipoteca - enganche_total;
    mensualidad = hipoteca_neto / (12 * anios);

    cout<<"Ingresos: "<<ingresos<<" Hipoteca de casa "<<hipoteca<<"$ \n";
    cout<<"Valor que enganche es de: "<<(enganche*100)<<"% \n";
    cout<<"El enganche total es de: "<<enganche_total<<"$ \n";
    cout<<"Valor de la hipoteca restando el enganche "<<hipoteca_neto<<"$ \n";
    cout<<"Valor de mensualidad en un total de "<<(12 * anios)<<" meses es:"<<mensualidad<<"$";

    return 0;
}
