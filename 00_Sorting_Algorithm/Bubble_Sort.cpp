/*tanvir866......*/
// t.c = O(n)in best case. in average and worst case  t.c = O(n^2)  s.c = O(n)
#include <bits/stdc++.h>
using namespace std;


void bubble_sort(int arr[], int n) {
    
    for (int i = n - 1; i >= 0; i--) {
        bool swape=false;
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                swape = true;
            }
        }
        if(swape==false)
        {
            cout<<"already sorted"<<endl;
            break;
        }
    }
}

int main()
{
    //getting input
    int n;
    cout << "enter the array size: ";
    cin >> n;
    int arr[n];
    cout << "enter array elements: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //print array like input
    cout << "Before sort: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    
    //here call sorting function which you have to use
    bubble_sort(arr, n);

    //print sorted array 
    cout << "After sort: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}