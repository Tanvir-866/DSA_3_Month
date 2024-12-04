#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cout << "enter the string : ";
    cin >> s;

    //precompute:
    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++) {
        hash[s[i]]++;
    }

    int q;
    cout << "enter value of q : ";
    cin >> q;
    while (q--) {
        char c;
        cout << "enter which char frequency you want to fatch :";
        cin >> c;
        // fetch:
        cout << hash[c] << endl;
    }
    return 0;
}