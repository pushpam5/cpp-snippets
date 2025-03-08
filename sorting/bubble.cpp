#include <iostream>
using namespace std;

/*
Move the largest element to the end of the array.

Time complexity: O(N2), (where N = size of the array), for the worst, and average cases.
if the given array is already sorted. We can reduce the time complexity to O(N) using the isSwapped flag.
*/
void bubbleSort(int arr[], int n)
{
    for (int i = n - 1; i > 0; i--)
    {
        bool isSwapped = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwapped = true;
            }
        }
        if (!isSwapped)
        {
            break;
        }
    }
}

void bubbleSortRecursive(int arr[], int n)
{

    if (n <= 0)
    {
        return;
    }

    for (int j = 0; j < n; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            swap(arr[j], arr[j + 1]);
        }
    }
    bubbleSortRecursive(arr, n - 1);
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
    bubbleSortRecursive(arr, n - 1);
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}