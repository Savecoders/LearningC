
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    double nota;
    string mensaje = "";

    cout << "Ingrese su nota: ";
    cin >> nota;

    if (nota < 5){

        mensaje = "reprobado";

    }else if (nota >= 5 && nota < 6.5){
    
        mensaje = "regular";
    
    }else if (nota >= 6.5 && nota < 8){
    
        mensaje = "bueno";

    }else if (nota >= 8 && nota < 9){

        mensaje = "muy bueno";

    }else{

        mensaje = "matricula de honor";

    }

    cout << mensaje;
    return 0;
}
