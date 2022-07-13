
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    double presupuesto, ginecologia, pediatria, traumatologia;

    cout << "Ingrese el presupuesto: ";
    cin >> presupuesto;

    ginecologia = presupuesto * 0.4;
    traumatologia = presupuesto * 0.3;
    pediatria = presupuesto * 0.3;

    cout<<"El presupuesto para ginecologia: "<<ginecologia<<"\n";
    cout<<"El presupuesto para traumatologia: "<<traumatologia<<"\n";
    cout<<"El presupuesto para pediatria: "<<pediatria<<"\n";

    /* code */
    return 0;
}
