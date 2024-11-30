/*tanvir866......*/
#include <bits/stdc++.h> 
using namespace std;

bool checkPrime(int n){ 
    int cnt = 0;

    for(int i = 2; i <= sqrt(n); i++){ 

        if(n % i == 0){ 
            cnt = cnt + 1;
        }
    }
    if(cnt>1){
        return true;
    }
    else{ 
        return false;
    }
}


int main() {
    int n;
    cout <<"Enter the number : ";
    cin >> n;
    if(checkPrime(n)){
        cout << n << " is not a prime number." << endl;
    } else {
        cout << n << " is a prime number." << endl;
    }

    return 0;
}