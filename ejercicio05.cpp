/* 5. Desarrollar un programa, utilizando funciones con un tipo de retorno,
 con las siguientes opciones:
a. Introducir un valor x entero comprendido entre 0 y 100
b. Validar que sea un valor par.
c. Sumar todos los números impares desde el 0 hasta el valor de x. */

#include <iostream>
using namespace std;

bool Numero(int num)
{
    if(num>0 && num<100)
    {
       return true;
    }
    else
    {
        cout<<num<<" no está entre 0 y 100"<<endl;
        return false;
    }
}
void esPar(int num)
{
    if(num%2==0)
    {
        cout<<num<<" es par."<<endl;
    }
    else
    {
        cout<<num<<" no es par."<<endl;
    }

}


void sumaImpares(int num)
{
    int suma=0;
    for (int i=1; i<=num; i=i+2)
    {
        suma=suma+i;
    }
    cout<<"Suma de impares desde el 0 al "<<num<<" = "<<suma<<endl;

}



int main()
{
    int x;
    cout<<"Elige un número del 0 al 100 "<<endl ;cin>>x;
    if(Numero(x)==true)
    {
        esPar(x);
        sumaImpares(x);
    }

    return 0;
}
