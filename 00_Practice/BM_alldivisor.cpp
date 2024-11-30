/*tanvir866......*/
#include <bits/stdc++.h> 
using namespace std;

vector<int> findDivisors(int n) {
    
    vector<int> divisors; 

    int sqrtN = sqrt(n); 
    // Loop from 1 to the
    // square root of n
    for (int i = 1; i <= sqrtN; ++i) { 
        // Check if i divides n
        // without leaving a remainder
        if (n % i == 0) { 
            // Add divisor i to the list
            divisors.push_back(i); 

            // Add the counterpart divisor
            // if it's different from i
            if (i != n / i) {
                // Add the counterpart
                // divisor to the list
                divisors.push_back(n / i); 
            }
        }
    }
    // Return the list of divisors
    return divisors; 
}


int main() {
    int num;
    cout <<"Enter the number : ";
    cin >> num;
    vector<int> divisors = findDivisors(num);
    sort(divisors.begin(),divisors.end());

    cout << "Divisors of " << num << " are: ";
    for (int divisor : divisors) {
        cout << divisor << " ";
    }
    cout << endl;

    return 0;
}