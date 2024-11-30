/*tanvir866......*/
#include <iostream>
using namespace std;

int revNum(int n)
{
    int revnum = 0;
	while(n > 0){
		// Extract the last digit of
		// 'n' and store it in 'ld'.
		int ld = n % 10;
		// Multiply the current reverse number
		// by 10 and add the last digit.
		revnum = (revnum * 10) + ld;
		// Remove the last digit from 'n'.
		n = n / 10;
	}
    return revnum;
}

int main() {

	int n;
    cout <<"Enter the number : ";
	cin >> n;
	
	cout << revNum(n);
}