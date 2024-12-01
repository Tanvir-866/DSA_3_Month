/*tanvir866......*/
#include <iostream>
using namespace std;

bool palindrome(int i, string& s){
    
    // Base Condition
   
    if(i>=s.length()/2) return true;
    // If the start is not equal to the end, not the palindrome.
    if(s[i]!=s[s.length()-i-1]) return false;
    // If both characters are the same, increment i and check start+1 and end-1.
    return palindrome(i+1,s);
}

int main() {
	
	// Example string.
	string s = "madam";
	cout<<palindrome(0,s);
	cout<<endl;
	return 0;
}