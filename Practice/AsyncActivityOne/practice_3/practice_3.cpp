
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    
    double capital, ganancia_mes, valor_total ;
    
    cout<<"Ingrese el capital: ";
    cin>>capital;

    ganancia_mes = capital * 0.2;

    valor_total = capital + ganancia_mes;
    

    cout<<"El valor a recibir es de: "<<valor_total;

    return 0;
}
