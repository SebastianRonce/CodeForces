/*
Entrada:
 - Un entero n (suma de dinero)
Salida:
 - Número mínimo de billetes (denominaciones 100,20,10,5,1)
Ejemplo:
Entrada:
125
Salida:
3
*/
#include <iostream>
using namespace std;

int main(){
    int total;
    int bill = 0;
    
    cin >> total; 

    while (total != 0){
        if (total/100 != 0){
            bill += total/100;
            total -= (total/100)*100;
        } else if (total/20 != 0){
            bill += total/20;
            total -= (total/20)*20;
        } else if (total/10 != 0){
            bill += total/10;
            total -= (total/10) * 10;
        } else if (total/5 != 0){
            bill += total/5;
            total -= (total/5)*5;
        } else if (total != 0){
            bill += total;
            total -= total;
        }
        
    }
    cout << bill;
    return 0;
}