// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int solve() {
    int n; cin >> n;
    vector<int> numeros(n);
    int pos_1 = -1, pos_n = -1;

    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
        if (numeros[i] == 1) pos_1 = i;
        if (numeros[i] == n) pos_n = i;
    }

    if (pos_1 == 0 && pos_n == n - 1) return 0;

    if (pos_1 < pos_n) return pos_1 + (n - 1 - pos_n);

    return pos_1 + (n - 1 - pos_n) - 1;
}

int main() {
    int t; cin >> t;
    while (t--)
        cout << solve() << endl;
}

