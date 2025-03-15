#include <iostream>

using namespace std;

vector<int> rearrangeArray(vector<int> &nums)
{
    int even = 0, odd = 1;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] >= 0)
        {
            swap(nums[i], nums[even]);
            even += 2;
        }
        else
        {
            swap(nums[i], nums[odd]);
            odd += 2;
        }
    }

    return nums;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    rearrangeArray(nums);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}