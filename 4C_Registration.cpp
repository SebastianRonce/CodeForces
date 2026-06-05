/*
Entrada:
 - Primera línea: entero n (número de solicitudes)
 - Siguientes n líneas: nombres solicitados
Salida:
 - Para cada solicitud, imprime "OK" si el nombre no existía; si ya existe, imprime el nombre con el sufijo numérico
Ejemplo:
Entrada:
4
first
first
second
first
Salida:
OK
first1
OK
first2
*/

#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    string nombre;
    map<string, int> database;

    cin >> n;
    
    for (int i = 0; i < n; i++){
        cin >> nombre;
        if (database.count(nombre) == 0){
            database[nombre] = 1;
            cout << "OK" << endl;
        } else {
            cout << nombre + to_string(database[nombre]) << endl;
            database[nombre] += 1;
        }
    }
    return 0;
}