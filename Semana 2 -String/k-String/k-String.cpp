#include <bits/stdc++.h>
using namespace std;

int contarCantVeces(char x, string &s) {
    int contador = 0;
    for (char letter : s)
        if (letter == x) contador++;
    return contador;
}

string solve(int k, string s) {
    if(k == 1) return s;
    if(s.size() < k) return "-1";

    unordered_map<char, int> freq;
    for(char x : s) freq[x]++;

    string substr = "";

    for(auto [x, cantVecesLetra] : freq){
        if(cantVecesLetra % k != 0) return "-1";
        substr += string(cantVecesLetra / k, x);
    }

    string result = "";
    for(int i = 0; i < k; i++)
        result += substr;

    return result;
}

int main() {
    int k; cin >> k;
    string s; cin >> s;
    cout << solve(k, s) << endl;
}
