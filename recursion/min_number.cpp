#include <iostream>
using namespace std;

int findMinElement(int arr[], int n, int low)
{

    if (low >= n)
    {
        return arr[n - 1];
    }

    return min(arr[low], findMinElement(arr, n, low + 1));
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
    cout << findMinElement(arr, n, 0) << endl;
    return 0;
}