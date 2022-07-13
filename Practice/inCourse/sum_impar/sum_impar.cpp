
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int count_impares = 0, impar=1;

    for (int count = 0; count < 10; count++)
    {
        cout<<"Num: "<<impar<<"\n";
        count_impares += impar;
        impar+=2;
    }
    cout<<"La suma de los numeros impares, es : "<<count_impares;
    return 0;
}