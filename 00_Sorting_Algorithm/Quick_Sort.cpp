/*tanvir866......*/
// t.c = O(n log n)in best and average case and t.c = O(n^2)in worst case.  s.c = O(n) in worst case
#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }

        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }
        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void quick_Sort(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pIndex = partition(arr, low, high);
        quick_Sort(arr, low, pIndex - 1);
        quick_Sort(arr, pIndex + 1, high);
    }
}


int main()
{
    // getting input
    vector<int> arr;
    int n;
    cout << "enter the size of vector:";
    cin >> n;
    cout << "enter array elements: " << "\n";
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in; arr.push_back(in);
    }

    // print array like input
    cout << "Before sort: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    // here call sorting function which you have to use
    quick_Sort(arr, 0, n - 1);

    // print sorted array
    cout << "After sort: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}