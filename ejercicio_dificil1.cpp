#include <iostream>
using namespace std;
int main ()
{

    int valorInicial;
    int valorFinal;
    int par = 0;
    int impar = 0;
    cout << "ingrese el valor inicial: \n";
    cin >> valorInicial;

    cout << "ingresa el valor final: \n";
    cin >> valorFinal;

    if (valorFinal <= valorInicial)
    {

        cout << "escriba el valor inicial distinto y menor al final";
    }
    cout << "los numeros impares son: " << endl;
    for (int i = valorInicial ; i<valorFinal ; i++)
    {

        if (i%2 !=0)
        {
            cout<<i << endl;
        }

    }

    cout << "los numeros pares son: " << endl;

    for(int i = valorInicial ; i<valorFinal ; i++){

        if (i%2==0){
            cout << i << endl;
        }
    }



    return 0;
}
