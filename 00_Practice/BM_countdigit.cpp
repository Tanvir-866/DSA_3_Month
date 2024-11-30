/*tanvir866......*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// Function to count the number
// of digits in an integer 'n'.
int countDigits(int n){

   // int cnt = (int)(log10(n)+1); 
   /* The expression (int)(log10(n)+1) calculates the number of digits in 'n' and casts it to an integer. 
   Adding 1 to the result accounts for the case when 'n' is a power of 10, ensuring that the count is correct.*/

    int cnt = 0;
    while(n > 0){
        
        cnt++;
        // Divide 'n' by 10 to
        // remove the last digit.
        n = n / 10;
    }
    return cnt;
}



int main() {
    int N;
    cout <<"Enter the number : ";
    cin >> N;
    cout << endl << "N: "<< N << endl;
    cout << "Number of Digits in N: "<< countDigits(N)<< endl;
    return 0;
}