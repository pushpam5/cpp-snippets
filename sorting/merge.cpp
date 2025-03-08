#include <iostream>

using namespace std;

/*
Time complexity: O(nlogn)
Space complexity: O(n) for mergeO1, O(n) extra for merge
mergeO1 does not work for negative numbers
*/

int merge(int arr[], int low, int mid, int high);

/*
Concept used here:

Suppose we want to store arr[i] and arr[j] both at index i(means in arr[i]).
First we have to find a ‘maxval’ greater than both arr[i] and arr[j]. Now we can store as arr[i] = arr[i] + arr[j]*maxval.
Now arr[i]%maxval will give the original value of arr[i] and arr[i]/maxval will give the value of arr[j].
*/
int mergeO1(int arr[], int low, int mid, int high, int maxelement)
{
    int i = low;
    int j = mid + 1;
    int k = low;
    int inversions = 0;
    while (i <= mid && j <= high)
    {
        if (arr[i] % maxelement <= arr[j] % maxelement)
        {
            arr[k] = arr[k] + (arr[i] % maxelement) * maxelement;
            i++;
        }
        else
        {
            arr[k] = arr[k] + (arr[j] % maxelement) * maxelement;
            j++;
            inversions += (mid - i + 1);
        }
        k++;
    }

    while (i <= mid)
    {
        arr[k] = arr[k] + (arr[i] % maxelement) * maxelement;
        i++;
        k++;
    }

    while (j <= high)
    {
        arr[k] = arr[k] + (arr[j] % maxelement) * maxelement;
        j++;
        k++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = arr[i] / maxelement;
    }
    return inversions;
}

int mergeSort(int arr[], int low, int high, int maxElement)
{
    if (low >= high)
    {
        return 0;
    }
    int inversions = 0;
    int mid = (low + high) / 2;
    inversions += mergeSort(arr, low, mid, maxElement);
    inversions += mergeSort(arr, mid + 1, high, maxElement);
    // merge(arr, low, mid, high);
    inversions += mergeO1(arr, low, mid, high, maxElement);

    return inversions;
}

int merge(int arr[], int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int temp[high - low + 1];
    int k = 0;
    int inversions = 0;
    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            inversions += (mid - i + 1);
        }
    }

    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }

    while (j <= high)
    {
        temp[k++] = arr[j++];
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
    return inversions;
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

    // max_element gives an iterator to the largest element in the range [first, last)
    cout << "Inversions: " << mergeSort(arr, 0, n - 1, *max_element(arr, arr + n) + 1) << endl;

    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
