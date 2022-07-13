
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int count_impares = 0;

    for (int count = 2;count <=100; count+=2)
    {

        cout<<"Num: "<<count<<"\n";
        count_impares += count;
    
    }
    cout<<"La suma de los numeros impares, es : "<<count_impares;
    return 0;
}