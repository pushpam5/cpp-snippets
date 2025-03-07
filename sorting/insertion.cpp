#include <iostream>
using namespace std;

/*
Place the element at the correct position in the sorted array.

Time complexity: O(N2), (where N = size of the array), for the worst, and average cases.
If the given array is already sorted, the outer loop will only run and the inner loop will run for 0 times.
So, our overall time complexity in the best case will boil down to O(N)
*/
void insertionSortRecursive(int arr[], int n, int low)
{

    if (low >= n)
    {
        return;
    }

    int j = low;
    while (j > 0 && arr[j - 1] > arr[j])
    {
        swap(arr[j], arr[j - 1]);
        j--;
    }
    insertionSortRecursive(arr, n, low + 1);
}

void insertionSortIterative(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertionSortIterative(arr, n);
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}