
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    
    int number, factorial_count = 1;

    cout<<"Ingrese el numero que desea obtener su factorial: ";
    cin>>number;

    for (int i = number; i > 0; i--){

        factorial_count*= i;
    }

    cout<<"El factorial de "<<number<<" es: "<<factorial_count;    

    return 0;
}
