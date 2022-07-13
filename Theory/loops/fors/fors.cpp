
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int count_numbers, number, loops;

    cout<<"Ingrese la cantidad de numeros, que desea sumar: ";
    cin>>loops;

    for (int count = 0; count < loops; count++)
    {
        cout<<"Ingrese un numero numero: ";
        cin>>number;

        //count numbers
        count_numbers+=number;
    }
    

    cout<<"La suma de los numeros, es : "<<count_numbers;
    
    return 0;
}