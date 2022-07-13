#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int count_impares = 10, impar=1;

    for (int count = 0; count < count_impares; count++)
    {
        cout<<"Num: "<<impar<<" ";
        impar+=2;
    }
    
    return 0;
}