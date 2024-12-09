/*tanvir866......*/
// t.c = O(n log n)in all cases.  s.c = O(n) in worst case
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;    // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1; // starting index of right half of arr

    // storing elements in the temporary array in a sorted manner //

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void merge_Sort(vector<int> &arr, int low, int high)
{
    if (low >= high){
        return;
    }
    int mid = (low + high) / 2;
    merge_Sort(arr, low, mid);      // left half
    merge_Sort(arr, mid + 1, high); // right half
    merge(arr, low, mid, high);    // merging sorted halves
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
    merge_Sort(arr, 0, n - 1);

    // print sorted array
    cout << "After sort: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}