#include <iostream>
using namespace std;

typedef vector<int> vi;

vector<vi> permutations;

// Time Complexity: O(N! * N * N)
void permuteWithoutSwaps(vi &nums, vi result, int n)
{
    if (result.size() == n)
    {
        permutations.push_back(result);
        return;
    }

    for (int i = 0; i < n; i++)
    {
        // This takes O(N) time
        if (find(result.begin(), result.end(), nums[i]) == result.end())
        {
            vi data = result;
            data.push_back(nums[i]);
            permuteWithoutSwaps(nums, data, n);
        }
    }
}

// Time Complexity: O(N! * N)
void optimizedPermute(int index, vi nums, int n)
{
    if (index >= n)
    {
        permutations.push_back(nums);
        return;
    }

    for (int i = index; i < n; i++)
    {
        swap(nums[index], nums[i]);
        optimizedPermute(index + 1, nums, n);
        swap(nums[index], nums[i]);
    }
}

int main()
{

    int n;
    cin >> n;
    vi nums(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    // permuteWithNFactorialComplexity(nums,{},n);
    optimizedPermute(0, nums, n);
    cout << "Permutations: " << permutations.size() << endl;
    for (auto a : permutations)
    {
        for (int i : a)
        {
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}
