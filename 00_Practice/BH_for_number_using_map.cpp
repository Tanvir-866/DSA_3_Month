#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter value of n : ";
    cin >> n;
    int arr[n];
    cout << "type n no of value : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //precompute:
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    /* iterate over the map:
    for(auto it : mp){
            cout << it.first << "->" << it.second << endl;
        }
    */

    int q;
    cout << "value of q : ";
    cin >> q;
    while (q--) {
        int number;
        cout << "enter which num frequency you want to fatch :";
        cin >> number;
        // fetch:
        cout << mp[number] << endl;
    }
    return 0;
}