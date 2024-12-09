/*tanvir866......*/
// t.c = O(n)in best case. in average and worst case  t.c = O(n^2)  s.c = O(n)
#include <bits/stdc++.h>
using namespace std;


void insertion_sort(int arr[], int n) {
    for (int i = 0; i <= n - 1; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
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
    insertion_sort(arr, n);

    //print sorted array 
    cout << "After sort: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}