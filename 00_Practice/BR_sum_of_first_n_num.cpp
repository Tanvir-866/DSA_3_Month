/*tanvir866......*/
#include <bits/stdc++.h>
using namespace std;

void func(int i, int sum){ // 1. Parameterized way
    // Base Condition.
    if (i < 1)
    {
        cout << sum << " Parameterized way" << endl;
        return;
    }
    // Function call to increment sum by i till i decrements to 1.
    func(i - 1, sum + i);
}

int func1(int n){          // 2. Functional way
    // Base Condition.
    if (n == 0)
    {
        return 0;
    }
    // Problem broken down into 2 parts and then combined.
    return n + func1(n - 1);
}

int main()
{
    int n;
    cout << "Enter value of n : ";
    cin >> n;
    func(n, 0);                            // 1. Parameterized way
    cout << func1(n) << " Functional way"; // 2. Functional way
    return 0;
}