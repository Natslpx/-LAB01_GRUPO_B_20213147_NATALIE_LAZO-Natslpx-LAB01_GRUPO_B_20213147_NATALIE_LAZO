/* 1. Hacer un programa que sin usar la función pow(), pero por
 medio de una función, calcule la potencia de un número
 (ambos números ingresados por teclado). */

#include <iostream>
using namespace std;
int potencia(int a, int b)
{
    int rpta=a;
    while (b>1)
    {
        rpta=rpta*a;
        b--;
    }
    return rpta;
}
int main()
{
    int base, exponente;
    cout<<"POTENCIA DE UN NÚMERO\n";
    cout<<"Ingrese la base: ";cin>>base;
    cout<<"Ingrese el exponente: ";cin>>exponente;
    cout<<base<<"^"<<exponente<<" = "<<potencia(base,exponente);
    return 0;
}
