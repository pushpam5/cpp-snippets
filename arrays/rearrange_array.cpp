#include <iostream>

using namespace std;

vector<int> rearrangeArray(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n, 0);
    int odd = 1, even = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] >= 0)
        {
            ans[even] = nums[i];
            even += 2;
        }
        else
        {
            ans[odd] = nums[i];
            odd += 2;
        }
    }

    return ans;
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
    nums = rearrangeArray(nums);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}