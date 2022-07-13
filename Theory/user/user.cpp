
#include <iostream>
// 
using namespace std;

int main(int argc, char const *argv[]){
    int edad;
    string sexo;

    cout<<"Ingrese su edad: ";
    cin>>edad;

    cout<<"Escriba su sexo: ";
    cin>>sexo;

    if(sexo=="hombre"){
        if(edad>=60){
            cout<<"ya se puedo jubilar";
        }else{
            cout<<"no se puede jubiar la falta anios";
        }
    }else{
        if(edad>54){
            cout<<"ya se puedo jubilar";
        }else{
            cout<<"no se puede jubiar la falta anios";
        }
    }
    
    return 0;
}
