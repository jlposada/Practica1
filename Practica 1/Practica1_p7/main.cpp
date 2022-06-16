/* En la serie de Fibonacci, cada número es la suma de los 2 anteriores e inicia con 1 y
1. Ej: 1, 1, 2, 3, 5, 8, ....
Escriba un programa que reciba un número n y halle la suma de todos los números pares en la serie
de Fibonacci menores a n.
Ej: si se ingresa 10, sería la suma de 2+8 =10
Nota: el formato de salida debe ser: El resultado de la suma es: 10
*/

#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "Por favor ingrese el numero que desea calcular: ";
    cin >> n;
    if (n == false){
        cout << "Por favor ingrese un numero." << endl;
    }

    else{
        int num = 1;
        int anterior = 0;
        int aux;
        int npar = 0;
        int nparant = 0;
        int suma = 0;
        bool verf_while = true;

        while(verf_while == true){
            aux = num;
            num += anterior;
            anterior = aux;
            if (num%2==0){
                npar = num;
                suma += nparant;
                nparant = npar;
                if (n <= num){
                    cout << "El resultado de la suma es: " << suma << endl;
                    verf_while = false;
                }
            }
        }

        }
    cout << endl;
    return 0;
}
