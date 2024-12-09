/*tanvir866......*/ 
//t.c = O(n^2) and s.c = O(1)
#include <bits/stdc++.h>
using namespace std;


void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        // swap
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
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
    selection_sort(arr, n);

    //print sorted array 
    cout << "After sort: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}