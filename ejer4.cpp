#include <iostream>
using namespace std;

int main() {
    int numeros[100];


    // Inicializamos el array con los números del 1 al 100.
    for (int i = 0; i < 100; i++) 
    {
        numeros[i] = i + 1;
    }

    // Sumamos los elementos del array.
    for (int j = 0; j < 100; j++) 
    {
       cout << "La suma de los numeros del 1 al 100 es: " << numeros [j] << endl;
    }

    
     

    return 0;
}
