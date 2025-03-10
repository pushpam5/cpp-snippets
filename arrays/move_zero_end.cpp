#include <iostream>

using namespace std;

typedef vector<int> vi;

void moveZeroes(vector<int> &nums)
{
    int zeroIndex = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[zeroIndex++], nums[i]);
        }
    }
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
    moveZeroes(nums);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}