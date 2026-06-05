/*
Sobre la mesa hay n piedras en fila, cada una puede ser roja, verde o azul. 
Calcula el número mínimo de piedras que debes tomar de la mesa de manera que dos piedras 
adyacentes tengan colores diferentes.
Dos piedras en fila se consideran adyacentes si no hay ninguna otra entre ellas.
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {

    string texto;
    int contador = 0;
    int n;

    cin >> n;
    cin >> texto;

    vector<char> color(texto.begin(), texto.end());

    for (int i = 0; i < (int)color.size() - 1; i++) {

        if (color[i] == color[i + 1]) {
            contador++;
        }
    }

    cout << contador << endl;

    return 0;
}