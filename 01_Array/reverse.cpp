#include<iostream>
using namespace std;

void reverseArr(int arr[],int size)
{
    int start=0;
    int end=size-1;
    while(start<=end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void getarr(int arr[],int size)
{
    cout<<"Enter the array element : ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}

int main()
{
  int arr[1000],size;
  cout<<"Enter the array size : ";
  cin>>size;
  getarr(arr,size);
  reverseArr(arr,size);
  for(int i=0;i<size;i++)
  {
    cout<<arr[i]<<" ";
  }

}