#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string texto;
    cin >> texto;

    bool todoMayus = true;
    for (char c : texto) {
        if (!isupper(c)) {
            todoMayus = false;
            break;
        }
    }

    if (todoMayus) {
        for (char &c : texto) {
            c = tolower(c);
        }
        cout << texto << endl;
    }
    else {
        bool condicion = (texto.length() == 1);

        if (!condicion && islower(texto[0])) {
            condicion = true;
            for (size_t i = 1; i < texto.length(); i++) {
                if (!isupper(texto[i])) {
                    condicion = false;
                    break;
                }
            }
        }

        if (condicion) {
            texto[0] = toupper(texto[0]);
            for (size_t i = 1; i < texto.length(); i++) {
                texto[i] = tolower(texto[i]);
            }
        }

        cout << texto << endl;
    }

    return 0;
}
// ENUNCIADO
/*
Problema: Bloqueo de mayúsculas accidental

En algunos casos, una palabra se escribe con la tecla de bloqueo de mayúsculas (Caps Lock) activada por error.
Queremos detectar cuando la palabra cumple una de estas condiciones:

* Todas las letras son mayúsculas.
* Todas las letras, excepto la primera, son mayúsculas.

Si se cumple alguna de estas condiciones, se debe corregir la palabra cambiando el caso de todas las letras.
Ejemplos:
* "hELLO" debe convertirse en "Hello".
* "HTTP" debe convertirse en "http".
* "z" debe convertirse en "Z".

Si la palabra no cumple ninguna de las condiciones, se debe imprimir tal cual como se recibió.

Entrada
La primera línea contiene una palabra formada por letras latinas mayúsculas y minúsculas.
La longitud de la palabra está entre 1 y 100 caracteres, inclusive.

Salida
Imprime la palabra después de aplicar la regla de corrección.

Ejemplos
Entrada:
```
cAPS
```
Salida:
```
Caps
```

Entrada:
```
Cerradura
```
Salida:
```
Cerradura
```

*/