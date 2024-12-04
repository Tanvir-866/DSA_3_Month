#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cout << "enter the string : ";
    cin >> s;

    //precompute:
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
    }

    int q;
    cout << "enter value of q : ";
    cin >> q;
    while (q--) {
        char c;
        cout << "enter which char frequency you want to fatch :";
        cin >> c;
        // fetch:
        cout << mp[c] << endl;
    }
    return 0;
}