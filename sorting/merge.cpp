#include <iostream>

using namespace std;

/*
Time complexity: O(nlogn)
Space complexity: O(n) for mergeO1, O(n) extra for merge
mergeO1 does not work for negative numbers
*/

void merge(int arr[], int low, int mid, int high);

/*
Concept used here:

Suppose we want to store arr[i] and arr[j] both at index i(means in arr[i]). 
First we have to find a ‘maxval’ greater than both arr[i] and arr[j]. Now we can store as arr[i] = arr[i] + arr[j]*maxval. 
Now arr[i]%maxval will give the original value of arr[i] and arr[i]/maxval will give the value of arr[j]. 
*/
void mergeO1(int arr[], int low, int mid, int high, int maxelement)
{
    int i = low;
    int j = mid + 1;
    int k = low;
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
}

void mergeSort(int arr[], int low, int high, int maxElement)
{
    if (low >= high)
    {
        return;
    }

    int mid = (low + high) / 2;
    mergeSort(arr, low, mid, maxElement);
    mergeSort(arr, mid + 1, high, maxElement);
    // merge(arr, low, mid, high);
    mergeO1(arr, low, mid, high, maxElement);
}

void merge(int arr[], int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int temp[high - low + 1];
    int k = 0;
    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
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
    mergeSort(arr, 0, n - 1, *max_element(arr, arr + n) + 1);

    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
