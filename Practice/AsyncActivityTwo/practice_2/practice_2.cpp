
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    for (int count = 0; count < 5; count++)
    {   
        int number;
        
        cout<<"Ingrese un numero numero: ";
        cin>>number;

        if(number%2==0){
            cout<<"Es par \n";
        }else{
            cout<<"Es impar \n";
        }
    }
    return 0;
}