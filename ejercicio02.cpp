/* 2. Hacer un programa que lea por teclado un año, calcule y
muestre si es bisiesto. Para realizar el cálculo utiliza una
función llamada bisiesto. La función bisiesto recibe el año
leído por teclado, comprueba si es o no bisiesto.*/

#include <iostream>
using namespace std;
void bisiesto(int a)
{
    if(a%4==0)
    {
        if(a%100==0)
        {
            if(a%400==0)
            {
                cout<<a<<" es un año bisiesto.";
            }
            else
            {
                cout<<a<<" no es un año bisiesto.";
            }

        }
        else
        {
            cout<<a<<" es un año bisiesto.";
        }
    }
    else
    {
        cout<<a<<" no es un año bisiesto.";
    }
}
int main()
{
    int año;
    cout<<"AÑO BISIESTO\n";
    cout<<"Ingrese el año; ";cin>>año;
    bisiesto(año);
    return 0;
}
