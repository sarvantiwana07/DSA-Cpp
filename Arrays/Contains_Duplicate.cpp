/*
Problem: Contains Duplicate
Approach:
- First sort the array and then check the previous element is equal to the current element or not
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>

bool containsDuplicate(vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vector<int> nums = {1, 2, 3, 1};

    bool ans = containsDuplicate(nums);

    if (ans)
    {
        cout << "Duplicate is there";
    }
    else
    {
        cout << "Duplicate is not there";
    }

    return 0;
}
