/* 4. Hacer un programa que desarrolle una función, que genere en pantalla el listado de
números primos ubicados entre 1 hasta un numero x (x es ingresado por teclado).*/

#include <iostream>
using namespace std;
int Primo(int num)
{

    for (int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            return 1;
        }


    }
    return 2;
}
int main()
{
    int numero;
    cout<<"NÚMEROS PRIMOS"<<endl;
    cout<<"Ingrese un número: "; cin>>numero;
    if(Primo(numero)== 2)
    {
        cout<<numero<<" es primo.";
    }
    else
    {
        cout<<numero<<" no es primo.";
    }

    return 0;
}
