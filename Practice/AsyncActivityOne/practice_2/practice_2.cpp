
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    
    double voltaje, resistencia, intensidad ;
    
    cout<<"Ingrese el voltaje: ";
    cin>>voltaje;

    cout<<"Ingrese la resistencia: ";
    cin>>resistencia;


    intensidad = voltaje/resistencia;

    cout<<"La intensidad es de: "<<intensidad;

    return 0;
}
