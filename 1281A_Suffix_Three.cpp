/*
Entrada:
 - Primera línea: entero n (número de palabras)
 - Siguientes n líneas: cada palabra representa una frase que termina en una partícula del idioma
Salida:
 - Para cada palabra, imprime:
   * FILIPINO si termina en "po"
   * JAPANESE si termina en "desu" o "masu"
   * KOREAN si termina en "mnida"
Ejemplo:
Entrada:
8
kamusta_po
genki_desu
ohayo_gozaimasu
annyeong_hashimnida
hajime_no_ippo
bensamu_no_sentou_houhou_ga_okama_kenpo
ang_halaman_doon_ay_sarisari_singkamasu
si_roy_mustang_ay_namamasu
Salida:
FILIPINO
JAPANESE
JAPANESE
KOREAN
FILIPINO
FILIPINO
JAPANESE
JAPANESE
*/

#include <iostream>
#include <string>
#include <string_view>
#include <vector>
using namespace std;
int main() {
    vector<string> palabras;
    string palabra;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> palabra;
        palabras.push_back(palabra);
    }

    for (string palabra : palabras){
        if (palabra.substr(palabra.size() - 2) == "po"){
            cout << "FILIPINO" << endl;
        } else if (palabra.substr(palabra.size() - 4) == "desu" || palabra.substr(palabra.size() - 4) == "masu"){
            cout << "JAPANESE" << endl;
        } else if (palabra.substr(palabra.size() - 5) == "mnida"){
            cout << "KOREAN" << endl;
        }
    }
    return 0;
}