#include<iostream>
using namespace std;

typedef vector<int> vi;


int removeDuplicates(vector<int>& nums) {
    int index = 0;
    for(int i = 1; i < nums.size(); i++){
        if(nums[index] < nums[i]){
            swap(nums[++index], nums[i]);
        }
    }
    return index + 1;
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

    int index = removeDuplicates(nums);
    cout << "Index: " << index << endl;
    for (int i = 0; i < index; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
}