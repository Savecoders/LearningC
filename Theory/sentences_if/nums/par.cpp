
#include <iostream>

using namespace std;

int main(){
    
    int num;
    
    cout<<"Ingrese un numero: ";
    cin>>num;
    

    if(num % 2 == 0 && num % 5 == 0){
        cout<<"Si es divisible\n";
    }else{
        cout<<"No es divisible \n";
    }
    
}