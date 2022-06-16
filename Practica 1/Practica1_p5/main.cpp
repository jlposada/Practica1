/*. Escriba un programa que muestre el siguiente patrón en la pantalla:
     *
    ***
   *****
  *******
   *****
    ***
     *
El tamaño del patrón estará determinado un número entero impar que ingrese el usuario. En el
ejemplo mostrado, el tamaño de la gura es 7.
*/

#include <iostream>

using namespace std;

int main()
{
    int n = 0, ast = 0, esp = 0;

    cout << "Por favor ingrese la cantidad de renglones del rombo: ";
    cin >> n;

    if (n%2 == 0){
        cout << "Por favor ingresar un numero impar." << endl;
    }
    else{
        for (int i = 1; i <= n; i++){
            for (esp = i; esp <= n-1; esp++){
                cout << " ";
            }
            for (ast = 1; ast <= (2*i)-1; ast++){
                cout << "*";
            }
            cout << endl;
        }
        for (int i = n-1; i >= 1; i--){
            for (esp = i; esp <= n-1; esp++){
                cout << " ";
            }
            for (ast = 1; ast <= (2*i)-1; ast++){
                cout << "*";
            }
            cout << endl;
        }
    }
    return 0;
}
