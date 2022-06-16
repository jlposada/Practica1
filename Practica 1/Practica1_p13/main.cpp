/*Escriba un programa que reciba un número y calcule la suma de todos los primos
menores que el número ingresado.
Ej: Si se recibe 10 el programa debe imprimir 17.
Nota: la salida del programa debe ser: El resultado de la suma es: 17
*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    int ant = 0;
    int suma = 0;



    cout << "Ingrese un numero entero positivo: ";
    cin >> n;

    if (n == false){
        cout << "Por favor ingrese un numero." << endl;
    }

    else if (n < 1){
        cout << "Por favor ingrese un entero positivo." << endl;
    }

    else{

        for(int i = 2;i < n;i++){

            int creci = 2;
            bool primo = true;

            while(primo == true && creci < i){

                if (i%creci == 0){
                    primo = false;
                }

                else{
                    creci++;

                }
            }
            if (primo == true){
                ant = i;
                suma += ant;
            }
        }

    }
    cout << "El resultado de la suma es: " << suma << endl;

    return 0;
}
