#include <iostream>
using namespace std;

int main ()
{
    float notas [6];
    float prom=0;

    for (int i= 0; i < 5; i++ )
    {
        cout << " Ingrese sus notas" << "\n";
        cin >> notas [i];

        prom= prom + notas [i];
    }

        cout << " Su promedio es de:" << prom/6 << " " << "\n";
    return 0;
    
}