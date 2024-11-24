/* tanvir866......
These are the codes i have practiced to learn pattern problems. Here are 21 problems, 
I have solved, which are in the form of functions like pattern 1 to 
pattern 21.
*/

#include <bits/stdc++.h>
using namespace std;

void pattern1(int N)
{
    
    for (int i = 0; i < N; i++)
    {
        
        for (int j = 0; j < N; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern2(int N)
{
    
    for (int i = 0; i < N; i++)
    {
       
        for (int j = 0; j <=i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern3(int N)
{
    for (int i = 1; i <= N; i++)
    {
        
        for (int j = 1; j <=i; j++)
        {
            cout <<j<<" ";
        }
        cout << endl;
    }
}
void pattern4(int N)
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout <<i<<" ";
        }
        cout << endl;
    }
}
void pattern5(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j =N; j>i; j--)
        {
            cout <<"* ";
        }
        cout << endl;
    }
}
void pattern6(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j =N; j>i; j--)
        {
            cout <<N-j+1<<" ";
        }
        cout << endl;
    }
}
void pattern7(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j =0; j<N-i-1; j++)
        {
            cout <<" ";
        }
        for(int j=0;j< 2*i+1;j++){
            
            cout<<"*";
        }
         for (int j =0; j<N-i-1; j++)
        {
            cout <<" ";
        }
        cout << endl;
    }
}
void pattern8(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j =0; j<i; j++)
        {
            cout <<" ";
        }
        for(int j=0;j< 2*N -(2*i +1);j++){
            
            cout<<"*";
        }
         for (int j =0; j<i; j++)
        {
            cout <<" ";
        }
        cout << endl;
    }
}
void pattern9(int n)
{
    pattern7(n);
    pattern8(n);
}
void pattern10(int N)
{
      for(int i=1;i<=2*N-1;i++){
         
          int stars = i;
          
          if(i>N) stars = 2*N-i;
          
          for(int j=1;j<=stars;j++){
              cout<<"*";
          }
          cout<<endl;
      }
}
void pattern11(int N)
{
      int start =1;
      
      for(int i=0;i<N;i++){
          if(i%2 ==0) start = 1;
          
          else start = 0;
          
          for(int j=0;j<=i;j++){
              cout<<start;
              start = 1-start;
          }
        cout<<endl;
      }
}
void pattern12(int N)
{
      int spaces = 2*(N-1);
      
      // Outer loop for the number of rows.
      for(int i=1;i<=N;i++){
          
          // for printing numbers in each row
          for(int j=1;j<=i;j++){
              cout<<j;
          }
          
          // for printing spaces in each row
          for(int j = 1;j<=spaces;j++){
              cout<<" ";
          }
          
          // for printing numbers in each row
          for(int j=i;j>=1;j--){
              cout<<j;
          }
          cout<<endl;
          
          spaces-=2;
      }
}
void pattern13(int N)
{
      // starting number
      int num =1;
      
      // Outer loop for the number of rows.
      for(int i=1;i<=N;i++){
          
          // Inner loop will loop for i times and
          // print numbers increasing by 1 each time.
          for(int j=1;j<=i;j++){
              cout<<num<<" ";
              num =num+1;
          }
          cout<<endl;
          
      }
}
void pattern14(int N)
{
      for(int i=0;i<N;i++){
          
          // Inner loop will loop for i times and
          // print alphabets from A to A + i.
          for(char ch = 'A'; ch<='A'+i;ch++){
              cout<<ch<<" ";
              
          }
          cout<<endl;
      }
}
void pattern15(int N)
{
      for(int i=0;i<N;i++){
          // Inner loop will loop for i times and
          // print alphabets from A to A + (N-i-1).
          for(char ch = 'A'; ch<='A'+(N-i-1);ch++){
              cout<<ch<<" ";
          }
          cout<<endl; 
      }
}
void pattern16(int N)
{
      // Outer loop for the number of rows.
      for(int i=0;i<N;i++){
          // Defining character for each row.
          char ch = 'A'+i;
          for(int j=0;j<=i;j++){
              // same char is to be printed i times in that row.
              cout<<ch<<" ";
              
          }
          cout<<endl;
      }
}
void pattern17(int N)
{
    // Outer loop for the number of rows.
      for(int i=0;i<N;i++){
          
          // for printing the spaces.
          for(int j=0;j<N-i-1;j++){
              cout<<" ";
          }
          
          // for printing the characters.
          char ch = 'A';
          int breakpoint = (2*i+1)/2;
          for(int j=1;j<=2*i+1;j++){
              
              cout<<ch;
              if(j <= breakpoint) ch++;
              else ch--;
          }
          
          // for printing the spaces again after characters.
          for(int j=0;j<N-i-1;j++){
              cout<<" ";
          }
          cout<<endl;
          
      }
}
void pattern18(int N)
{
      // Outer loop for the no. of rows.
      for(int i=0;i<N;i++){
          
          // Inner loop for printing the alphabets from
          // A + N -1 -i (i is row no.) to A + N -1 ( E in this case).
          for(char ch =('A'+N-1)-i;ch<=('A'+N-1);ch++){
              
              cout<<ch<<" ";
          }
          cout<<endl;
      }
}
void pattern19(int N)
{
      // for the upper half of the pattern.
      
      // initial spaces.
      int iniS = 0;
      for(int i=0;i< N;i++){
          
          //for printing the stars in the row.
          for(int j=1;j<=N-i;j++){
              cout<<"*";
          }
          
          //for printing the spaces in the row.
          for(int j=0;j<iniS;j++){
              cout<<" ";
          }
          
          //for printing the stars in the row.
          for(int j=1;j<=N-i;j++){
              cout<<"*";
          }
          
          // The spaces increase by 2 every time we hit a new row.
          iniS+=2;
          cout<<endl;
      }
          // for lower half of the pattern
      
      // initial spaces.
      iniS = 2*N -2;
      for(int i=1;i<=N;i++){
          
          //for printing the stars in the row.
          for(int j=1;j<=i;j++){
              cout<<"*";
          }
          
          //for printing the spaces in the row.
          for(int j=0;j<iniS;j++){
              cout<<" ";
          }
          
          //for printing the stars in the row.
          for(int j=1;j<=i;j++){
              cout<<"*";
          }
          // The spaces decrease by 2 every time we hit a new row.
          iniS-=2;
          cout<<endl;
      }
      
}
void pattern20(int n)
{
      // initialising the spaces.
      int spaces = 2*n-2;
      
      // Outer loop for printing row.
      for(int i = 1;i<=2*n-1;i++){
          
          // stars for first half
          int stars = i;
          
          // stars for the second half.
          if(i>n) stars = 2*n - i;
          
          //for printing the stars
          for(int j=1;j<=stars;j++){
              cout<<"*";
          }
          
          //for printing the spaces
          for(int j = 1;j<=spaces;j++){
              cout<<" ";
          }

          //for printing the stars
          for(int j = 1;j<=stars;j++){
              cout<<"*";
          }
          cout<<endl;
          if(i<n) spaces -=2;
          else spaces +=2;
      }
      
}
void pattern21(int n)
{
     // outer loop for no. of rows.
     for(int i=0;i<n;i++){
         
         // inner loop for printing the stars at borders only.
         for(int j=0;j<n;j++){
             
             if(i==0 || j==0 || i==n-1 || j==n-1)
                cout<<"*";
                
             // if not border index, print space.
             else cout<<" ";
         }
          cout<<endl;
     }
      
}

int main()
{
    
    pattern21(5);
}