#include <iostream>
#include <algorithm>
using namespace std;

/*
Entrada:
 - Una línea con 4 enteros: tres sumas por pares y la suma total (en cualquier orden)
Salida:
 - Tres enteros a, b, c (en cualquier orden)
Ejemplo:
Entrada:
20 7 10 13
Salida:
3 7 10
*/

int main (){
    int numeros[4];
    int total[3];
    int j = 0;
    cin >> numeros[0] >> numeros[1] >> numeros[2] >> numeros[3];
    
    int mayor = *max_element(numeros, numeros + 4);
    for (int i = 0; i < 4; i++) {
        if (numeros[i] == mayor){
            continue;
        } else {
            total[j] = mayor - numeros[i];
            j++;
        }
    }
    for (int num: total) {
        cout << num << " ";
    }
    return 0;
}
/*
Policarp ha pensado tres enteros positivos a,byca, b y ca,byc. 
Él mantiene estos números en secreto, pero escribe cuatro números en una pizarra en orden arbitrario:
las sumas por pares (tres números) y la suma de los tres números (un número). Es decir, 
hay cuatro números en la pizarra en orden aleatorio:
a+ba + ba+b, a+ca + ca+c, b+cb + cb+c y a+b+ca + b + ca+b+c.
Debes adivinar los tres números a,ba, ba,b y ccc usando los números dados. Imprime los tres enteros en cualquier orden.
Ten en cuenta que algunos números a,b,ca, b, ca,b,c pueden ser iguales (también es posible que a=b=ca = b = ca=b=c).
*/