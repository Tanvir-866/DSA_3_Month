/*tanvir866......*/
#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){
   
   // Base Condition.
   if(i>n) return;
   cout<<"tanvir866..."<<endl;

   // Function call to print till i increments.
   func(i+1,n);

}

int main(){
  
  
  int n;
  cout<<"Enter how many time name have to print : ";
  cin>>n;
  
  func(1,n);
  return 0;

}