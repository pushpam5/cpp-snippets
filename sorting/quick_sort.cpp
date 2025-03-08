#include <iostream>
using namespace std;

/*

Time Complexity: O(N*logN)

*/

// Consider random index as the pivot
int getPartitionIndexRandom(int arr[], int low, int high)
{
    int randomIndex = low + rand() % (high - low + 1);
    swap(arr[randomIndex], arr[low]); // Swap random pivot with first element

    int pivot = arr[low];
    int i = low, j = high;

    while (i < j)
    {
        while (i < high && arr[i] <= pivot)
            i++;
        while (j > low && arr[j] > pivot)
            j--;
        if (i < j)
            swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]);
    return j;
}

// Consider lowest index as the pivot
int getPartitionIndexLow(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (i < high && arr[i] <= pivot)
        {
            i++;
        }
        while (j > low && arr[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

// Consider highest index as the pivot
int getPartitionIndexHigh(int arr[], int low, int high) {
    int pivot = arr[high];  // Use last element as pivot
    int i = low - 1;        // Pointer for smaller element

    for (int j = low; j < high; j++) {  
        if (arr[j] <= pivot) {  // If current element is smaller than or equal to pivot
            i++;
            swap(arr[i], arr[j]);  // Swap to bring smaller elements to the left
        }
    }
    
    swap(arr[i + 1], arr[high]);  // Place pivot at the correct position
    return i + 1;  // Return pivot index
}

void quickSort(int arr[], int low, int high)
{
    if (high > low)
    {
        int partitionIndex = getPartitionIndexHigh(arr, low, high);
        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, high);
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

    quickSort(arr, 0, n - 1);

    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
