#include<iostream>

using namespace std;

int missingNumber(vector<int>& nums) {
    int x{(int)nums.size()};
    int idx{0};
    for (const auto& n : nums) {
        x += idx - n;
        ++idx;
    }
    return x;
}

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << missingNumber(nums) << endl;
    return 0;
}