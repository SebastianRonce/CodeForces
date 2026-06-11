#include <iostream>
using namespace std;
int main (){
    int n, a;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> a;
        int contPar = 0;
        int contImpar = 0;
        for (int j = 0; j < a; j++){
            int x;
            cin >> x;
            if (x % 2 == 0){
                contPar++;
            } else {
                contImpar++;
            }
        }
        if (contPar == 0){
            if (a % 2 == 0){
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        } else if (contImpar == 0){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}