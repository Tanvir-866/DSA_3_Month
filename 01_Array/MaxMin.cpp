#include<iostream>
using namespace std;
//for finding max number
int Max(int arr[],int n)
{
     int maxt=arr[0];
     
      for(int i=0;i<n;i++)
       {
          maxt=max(maxt,arr[i]);
       }   
       return maxt;
}
//for finding min number
int Min(int arr[],int n)
{
     int mint=arr[0];
     
      for(int i=0;i<n;i++)
       {
          mint=min(mint,arr[i]);
       }  
       return mint; 
}
//for getting array input
void getArr(int arr[],int size)
{
   
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}

int main()
{

   int size;
    cout<<"Enter the size or array : ";
    cin>>size;
    int arr[100];
    getArr(arr,size);
   int MaxValue=Max(arr,size);
   int MinValue=Min(arr,size);
    cout<<"Max value from array is : "<<MaxValue<<endl;
    cout<<"Min value from array is : "<<MinValue;

  
}