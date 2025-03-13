#include<iostream>

using namespace std;

typedef vector<int> vi;

int maxSubArray(vi& nums) {
    int sum =0, maxi = INT_MIN;

    for(int i = 0; i < nums.size(); i++){
        
        sum += nums[i];

        if(sum > maxi){
            maxi = sum;
        }

        if(sum < 0){
            sum = 0;
        }
    }

    return maxi;
}

int main(){

    int n;
    cin >> n;
    vi nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << maxSubArray(nums);
}