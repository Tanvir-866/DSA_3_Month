/*tanvir866......*/
#include <bits/stdc++.h>
using namespace std;

void func(int i, int n)
{

  // Base Condition.
  if (i < 1)
    return;
  cout << i << endl;
  // Function call to print i till i decrements to 1.
  func(i - 1, n);
}

int main()
{

  int n;
  cout << "Enter value of n : ";
  cin >> n;
  func(n, n);
  return 0;
}