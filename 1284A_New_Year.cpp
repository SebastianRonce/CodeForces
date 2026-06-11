#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> s(n), t(m);
    for (int i = 0; i < n; i++) cin >> s[i];
    for (int i = 0; i < m; i++) cin >> t[i];

    int q;
    cin >> q;

    vector<int> year(q);
    for (int i = 0; i < q; i++) cin >> year[i];

    for (int i = 0; i < q; i++) {
        int x = year[i] % n - 1;
        int y = year[i] % m - 1;

        // Ajuste si el módulo da 0 (para evitar índice -1)
        if (x < 0) x += n;
        if (y < 0) y += m;

        cout << s[x] << t[y] << endl;
    }

    return 0;
}