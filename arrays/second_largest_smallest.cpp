#include <iostream>
using namespace std;
typedef vector<int> vi;

using namespace std;

/*
Time Complexity: O(N), Single-pass solution
Space Complexity: O(1)
*/

int getSecondLargest(vector<int> &arr)
{
    if (arr.size() <= 1)
    {
        return -1;
    }
    int largest = arr[0], secondLargest = INT_MIN;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }

        if (arr[i] < largest && arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN)
    {
        return -1;
    }
    return secondLargest;
}

int getSecondSmallest(vector<int> &arr)
{
    if (arr.size() <= 1)
    {
        return -1;
    }
    int smallest = arr[0], secondSmallest = INT_MAX;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }

        if (arr[i] > smallest && arr[i] < secondSmallest)
        {
            secondSmallest = arr[i];
        }
    }

    if (secondSmallest == INT_MAX)
    {
        return -1;
    }
    return secondSmallest;
}

vector<int> getSecondOrderElements(vector<int> a)
{
    int ssmallest = getSecondSmallest(a);
    int slargest = getSecondLargest(a);

    return {slargest, ssmallest};
}

int main()
{
    int n;
    cin >> n;
    vi nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    vi secondOrderElements = getSecondOrderElements(nums);
    cout << "Second Largest: " << secondOrderElements[0] << endl;
    cout << "Second Smallest: " << secondOrderElements[1] << endl;
}