#include <iostream>
using namespace std;

/*
Select the smallest element in the array and place it at the correct position.

Time complexity: O(N2), (where N = size of the array), for the best, worst, and average cases.
*/
int findMinIndex(int arr[], int n, int low)
{
    if (low >= n - 1)
    {
        return n - 1;
    }

    int minIndex = findMinIndex(arr, n, low + 1);
    return (arr[low] < arr[minIndex]) ? low : minIndex;
}

void selectionSortRecursive(int arr[], int n, int low)
{
    if (low >= n)
    {
        return;
    }

    int index = findMinIndex(arr, n, low);
    swap(arr[low], arr[index]);
    selectionSortRecursive(arr, n, low + 1);
}

void selectionSortIterative(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
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
    selectionSortRecursive(arr, n, 0);
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}