/*
Entrada:
 - Primera línea: entero n (longitud de la cadena)
 - Segunda línea: cadena compuesta por letras que forman las palabras "zero" y "one" mezcladas
Salida:
 - Imprime los números reconstruidos (1 para cada "one" y 0 para cada "zero") en cualquier orden
Ejemplo:
Entrada:
4
zeno
Salida:
1 0
*/

#include <iostream>
using namespace std;
int main (){
    int x;
    int contZ = 0;
    int contN = 0;
    string texto;
    cin >> x;
    cin >> texto;

    for (int i = 0; i < (int)texto.size(); i++){
       if (texto[i] == 'n'){
            contN += 1;
       } else if (texto[i] == 'z'){
            contZ += 1;
       }
    }

    for (int i = 0; i < contN; i++){
        cout << 1 << " ";
    }
    for (int i = 0; i < contZ; i++){
        cout << 0 << " ";
    }
    
    return 0;
}