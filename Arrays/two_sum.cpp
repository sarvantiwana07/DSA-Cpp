/*
Problem: Two Sum
Approach:
- Iterating through nums with two different loops
Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++) // To hold one element
    {
        for (int j = i+1; j < nums.size(); j++) // To check further that with 'i' any index returns the sum equal to target
        {
            if (nums[i]+nums[j] == target) // If index exists then push into ans vector
            {
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;

    vector<int> ans = twoSum(nums,target);

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}