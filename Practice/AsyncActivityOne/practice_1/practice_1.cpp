
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){

    double art1, art2, art3, average ;
    
    cout<<"Ingrese el primer articulo: ";
    cin>>art1;

    cout<<"Ingrese el segundo articulo: ";
    cin>>art2;

    cout<<"Ingrese el tercero articulo: ";
    cin>>art3;

    average = (art1+ art2 + art3) / 3;

    cout<<"La media de los 3 articulos es: "<<average;   

    return 0;
}


