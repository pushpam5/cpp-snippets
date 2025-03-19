#include <iostream>
using namespace std;

typedef vector<int> vi;

void nextPermutation(vector<int> &nums)
{
    int breakPointIndex = -1;

    for (int j = nums.size() - 2; j >= 0; j--)
    {
        if (nums[j] < nums[j + 1])
        {
            breakPointIndex = j;
            break;
        }
    }

    if (breakPointIndex == -1)
    {
        reverse(nums.begin(), nums.end());
        return;
    }

    for (int i = nums.size() - 1; i >= breakPointIndex; i--)
    {
        if (nums[breakPointIndex] < nums[i])
        {
            swap(nums[breakPointIndex], nums[i]);
            break;
        }
    }
    reverse(nums.begin() + breakPointIndex + 1, nums.end());
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

    nextPermutation(nums);
    for(int &a: nums){
        cout << a << " ";
    }
    cout << endl;
}