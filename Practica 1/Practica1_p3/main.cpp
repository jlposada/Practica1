/* Problema 3. Escriba un programa que debe leer un mes y un día de dicho mes para luego decir
si esa combinación de mes y día son válidos. El caso más especial es el 29 de febrero, en dicho caso
imprimir posiblemente año bisiesto.
Nota: el formato de salida debe ser:
14 es un mes invalido.
31/4 es una fecha invalida.
27/4 es una fecha valida.
29/2 es valida en bisiesto.
*/

#include <iostream>

using namespace std;

int main()
{
    int mes, dia;
    cout << "Por favor ingrese un mes del ano en su equivalencia numerica, ejemplo, Julio = 7: ";
    cin >> mes;

    if (mes == false){
        cout << "Por favor ingrese un numero." << endl;
    }

    else if(mes < 1 || mes > 12){
        cout << mes << " es un mes invalido." << endl;
    }

    else{
        cout << "Mes escogido " << mes << endl;
        if (mes == 1){
            cout << "Ahora, por favor ingrese un dia del mes: ";
            cin >> dia;
            if (dia == false){
                cout << "por favor ingrese un numero.";
            }
            else if (dia < 1 || dia > 31){
                cout << dia << "/" << mes << " es una fecha invalida." << endl;
            }
            else{
                cout << dia << "/" << mes << " es una fecha valida." << endl;

            }
        }
        else if(mes == 2){
                cout << "Ahora, por favor ingrese un dia del mes: ";
                cin >> dia;
                if (dia == false){
                    cout << "por favor ingrese un numero.";
                }
                else if(dia < 1 || dia > 29){
                    cout << dia << "/" << mes << " es una fecha invalida." << endl;
                }
                else if( dia == 29){
                    cout << dia << "/" << mes << " es una fecha valida en bisiesto." << endl;
                }
                else{
                    cout << dia << "/" << mes << " es una fecha valida." << endl;
                }
        }
        else if(mes == 3){
            cout << "Ahora, por favor ingrese un dia del mes: ";
            cin >> dia;
            if (dia == false){
                cout << "por favor ingrese un numero.";
            }
            else if (dia < 1 || dia > 31){
                cout << dia << "/" << mes << " es una fecha invalida." << endl;
            }
            else{
                cout << dia << "/" << mes << " es una fecha valida." << endl;

            }
        }
        else if(mes == 4){
            cout << "Ahora, por favor ingrese un dia del mes: ";
            cin >> dia;
            if (dia == false){
                cout << "por favor ingrese un numero.";
            }
            else if (dia < 1 || dia > 30){
                cout << dia << "/" << mes << " es una fecha invalida." << endl;
            }
            else{
                cout << dia << "/" << mes << " es una fecha valida." << endl;
            }
        }
        else if(mes == 5){
            cout << "Ahora, por favor ingrese un dia del mes: ";
            cin >> dia;
            if (dia == false){
                cout << "por favor ingrese un numero.";
            }
            else if (dia < 1 || dia > 31){
                cout << dia << "/" << mes << " es una fecha invalida." << endl;
            }
            else{
                cout << dia << "/" << mes << " es una fecha valida." << endl;

            }
        }
        else if(mes == 6){
            cout << "Ahora, por favor ingrese un dia del mes: ";
            cin >> dia;
            if (dia == false){
                cout << "por favor ingrese un numero.";
            }
            else if (dia < 1 || dia > 30){
                cout << dia << "/" << mes << " es una fecha invalida." << endl;
            }
            else{
                cout << dia << "/" << mes << " es una fecha valida." << endl;

            }
        }
        else if(mes == 7){
            cout << "Ahora, por favor ingrese un dia del mes: ";
            cin >> dia;
            if (dia == false){
                cout << "por favor ingrese un numero.";
            }
            else if (dia < 1 || dia > 31){
                cout << dia << "/" << mes << " es una fecha invalida." << endl;
            }
            else{
                cout << dia << "/" << mes << " es una fecha valida." << endl;

            }
        }
        else if(mes == 8){
            cout << "Ahora, por favor ingrese un dia del mes: ";
            cin >> dia;
            if (dia == false){
                cout << "por favor ingrese un numero.";
            }
            else if (dia < 1 || dia > 31){
                cout << dia << "/" << mes << " es una fecha invalida." << endl;
            }
            else{
                cout << dia << "/" << mes << " es una fecha valida." << endl;

            }
        }
        else if(mes == 9){
            cout << "Ahora, por favor ingrese un dia del mes: ";
            cin >> dia;
            if (dia == false){
                cout << "por favor ingrese un numero.";
            }
            else if (dia < 1 || dia > 30){
                cout << dia << "/" << mes << " es una fecha invalida." << endl;
            }
            else{
                cout << dia << "/" << mes << " es una fecha valida." << endl;

            }
        }
        else if(mes == 10){
            cout << "Ahora, por favor ingrese un dia del mes: ";
            cin >> dia;
            if (dia == false){
                cout << "por favor ingrese un numero.";
            }
            else if (dia < 1 || dia > 31){
                cout << dia << "/" << mes << " es una fecha invalida." << endl;
            }
            else{
                cout << dia << "/" << mes << " es una fecha valida." << endl;

            }
        }
        else if(mes == 11){
            cout << "Ahora, por favor ingrese un dia del mes: ";
            cin >> dia;
            if (dia == false){
                cout << "por favor ingrese un numero.";
            }
            else if (dia < 1 || dia > 30){
                cout << dia << "/" << mes << " es una fecha invalida." << endl;
            }
            else{
                cout << dia << "/" << mes << " es una fecha valida." << endl;

            }
        }
        else if(mes == 12){
            cout << "Ahora, por favor ingrese un dia del mes: ";
            cin >> dia;
            if (dia == false){
                cout << "por favor ingrese un numero.";
            }
            else if (dia < 1 || dia > 31){
                cout << dia << "/" << mes << " es una fecha invalida." << endl;
            }
            else{
                cout << dia << "/" << mes << " es una fecha valida." << endl;

            }
        }
    }
    return 0;
}
