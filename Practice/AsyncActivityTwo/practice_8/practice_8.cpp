
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float empleados_menores = 0, sueldo_menores = 0;
    float empleados_mayores = 0, sueldo_mayores = 0, maxima_paga = 0;
    string maximo_empleado;
    for (int i = 0; i < 10; i++)
    {
        string nombre, apellido;
        int edad, hora;
        float pago, sueldo, impuesto, neto;

        cout << "Ingresar el Nombre del empleado:  ";
        cin >> nombre;

        cout << "Ingresar el Apellido del empleado:  ";
        cin >> apellido;

        cout << "Ingresar el Horas que trabajo del empleado:  ";
        cin >> hora;

        cout << "Ingresar el Paga del empleado:  ";
        cin >> pago;

        cout << "Ingresar el edad del empleado:  ";
        cin >> edad;

        if (hora < 40)
        {
            sueldo = hora * pago;
        }
        else
        {
            float restante = hora - 40;

            sueldo = (40 * pago) + (restante * (pago * 1.5));
        }

        if (sueldo <= 200)
        {

            impuesto = (200 * 0.1);
        }
        else
        {
            impuesto = (200 * 0.1) + ((sueldo - 200) * 0.2);
        }

        neto = sueldo - impuesto;

        if (edad >= 55)
        {
            empleados_mayores++;
            sueldo_mayores += neto;
        }
        else if (edad < 55)
        {
            empleados_menores++;
            sueldo_menores+= neto;
        }

        if (maxima_paga == 0)
        {
            maximo_empleado = nombre;
            maxima_paga = neto;
        }
        else if (maxima_paga < neto)
        {
            maximo_empleado = nombre;
            maxima_paga = neto;
        }

        cout << nombre << " " << apellido << " horas: " << hora << " Edad: " << edad;
        cout << "Sueldo: " << sueldo << " impuesto" << impuesto << " neto: " << neto<<"\n";
    }

    cout << "El pago promedio para los empleados de al menos 55 anios: "<<(sueldo_mayores/empleados_mayores)<<"\n";
    cout << "El pago promedio para los empleados menos de  55 anios: "<<(sueldo_menores/empleados_menores)<<"\n";
    cout << "El empleado con mayor sueldo neto es: "<<maximo_empleado<<" con: "<<maxima_paga<<"$";

    return 0;
}
