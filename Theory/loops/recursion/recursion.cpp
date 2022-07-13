
#include <iostream>

using namespace std;

double recursion(int loops){
    
    double number = 0;

    if(loops>0){

        cout<<"Ingrese un numero numero: ";
        cin>>number;
    }else{
        return 0;
    }

    return number + recursion(loops-1);
}

int main(int argc, char const *argv[]){

    int loops;

    cout<<"Ingrese la cantidad de numeros, que desea sumar: ";
    cin>>loops;

    cout<<"La suma de los numeros, es : "<<recursion(loops);
    return 0;
}