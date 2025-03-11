#include <iostream>
using namespace std;

typedef vector<int> vi;

// a only contains positive numbers
int longestSubarrayWithSumKPositives(vi nums, long long k) {
    int maxLength = 0;
    long long sum = 0;
    int i = 0, j = 0, n = nums.size();


    while(j < n && i <= j){
        sum += nums[j];
        while(sum > k && i < j){
            sum -= nums[i++];
        }
        if(sum == k){
            maxLength = max(j - i + 1, maxLength);
        }
        j++;
    }

    return maxLength;
}

// arr can have both positives and negtives
int longestSubarrayWithSumK(vi& nums, int k) {
    // code here
    vector<int> sumArr(nums.size(),0);
    sumArr[0] = nums[0];
    for(int i = 1; i < nums.size(); i++){
        sumArr[i] += sumArr[i - 1] + nums[i];
    }
    
    unordered_map<int,int> hashMap;
    for(int i = 0; i < nums.size(); i++){
        if(hashMap.find(sumArr[i]) == hashMap.end()){
            hashMap[sumArr[i]] = i;
        }
    }
    int maxLength = 0;
    for(int i = 0; i < sumArr.size(); i++){
        if(sumArr[i] == k){
            maxLength = max(maxLength, i + 1);
        } else {
            if(hashMap.find(sumArr[i] - k) != hashMap.end()){
                int value = hashMap[sumArr[i] - k];
                maxLength = max(maxLength, i - value);
            }
        }
    }
    return maxLength;
}

int main()
{
    int n, k;
    cin >> n;
    vi nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cin >> k;
    cout << longestSubarrayWithSumK(nums, k);
}
