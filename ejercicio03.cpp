/* 3. Hacer un programa que lee por teclado la fecha actual y la
fecha de nacimiento de una persona y por medio de una función
 calcule su edad en años, meses y días.*/

#include <iostream>
using namespace std;

struct Fecha
{
    int anno;
    int mes;
    int dia;
};

void calcularEdad(Fecha fActual, Fecha fNacimiento)
{
    int annos = fActual.anno - fNacimiento.anno;
    int meses = fActual.mes - fNacimiento.mes;
    int dias = fActual.dia - fNacimiento.dia;

    if(meses < 0)
    {
        annos--;
        meses += 12;
    }

    if(dias < 0)
    {
        meses--;
        switch(fActual.mes)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                dias += 31;
                break;
            case 2:
                dias += 28;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                dias += 30;
        }
    }

    // correccion de bisiestos y meses

    // resultados
    dias += 365*annos + 30*meses;
    meses += 12*annos;


    cout << "edad: " << annos << " años" << endl;
    cout << "edad: " << meses << " meses" << endl;
    cout << "edad: " << dias << " dias" << endl;

}

int main()
{
    cout<<"Introducir los meses en números"<<endl;
    Fecha fechaActual;
    Fecha fechaNacimiento;
    Fecha edad;

    cout << "Año Actual: "; cin >> fechaActual.anno;
    cout << "Mes Actual: "; cin >> fechaActual.mes;
    cout << "Dia Actual: "; cin >> fechaActual.dia;

    cout << "Año Nacimiento: "; cin >> fechaNacimiento.anno;
    cout << "Mes Nacimiento: "; cin >> fechaNacimiento.mes;
    cout << "Dia Nacimiento: "; cin >> fechaNacimiento.dia;

    calcularEdad(fechaActual, fechaNacimiento);

}
