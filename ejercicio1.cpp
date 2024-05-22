#include <iostream>
using namespace std;

int main ()
{
    int colores [5] = {100, 1000, 3, 500, 85};

    for (int i=0 ; i < 5; i++) // el 5 es por el 5 del array , es decir hasta donde va a parar/llegar si se pome <= el array tendría que ser de 6
    {
        cout << " El numero del color es:" << colores [i] << endl; //los [] significan que es el valor que quiero imprimir
    }
        

    return 0;
}