/*tanvir866......*/
#include <bits/stdc++.h> 
using namespace std;

bool Armstrong(int num) {

    int p = (int)(log10(num)+1);
    int sum = 0;
    int n = num;
    while(n > 0){
        // Extract the last
        // digit of the number
        int ld = n % 10;
        // Add the digit raised to
        // the power of k to the sum
        sum += pow(ld, p); 
        // Remove the last digit
        // from the number
        n = n / 10;
    }
    // Check if the sum of digits raised to
    // the power of k equals the original number
    return sum == num ? true : false;
}

int main() {
    int num;
    cout <<"Enter the number : ";
    cin >> num;
    if (Armstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }
    return 0;
}