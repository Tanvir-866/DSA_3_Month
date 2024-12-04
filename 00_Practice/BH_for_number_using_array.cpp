/*tanvir866......*/
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
    int hash[13] = {0};
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cout << "value of q : ";
    cin >> q;
    while (q--) {
        int number;
        cout << "enter which num frequency you want to fatch :";
        cin >> number;
        // fetching:
        cout << " frequency is :";
        cout << hash[number] << endl;
    }
    return 0;
}