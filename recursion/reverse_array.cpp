#include <iostream>
using namespace std;

void reverseArray(int arr[], int l, int h)
{
    if (l >= h)
    {
        return;
    }

    int temp = arr[l];
    arr[l] = arr[h];
    arr[h] = temp;

    reverseArray(arr, l + 1, h - 1);
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

    reverseArray(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}