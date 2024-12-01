/*tanvir866......*/
#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    // Base Condition.
    if (n == 0)
    {
        return 1;
    }
    // Problem broken down into 2 parts and then combined.
    return n * factorial(n - 1);
}

int main()
{
    int n;
    cout << "Enter value of n : ";
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}