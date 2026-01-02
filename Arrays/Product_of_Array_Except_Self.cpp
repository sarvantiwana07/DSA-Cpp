/*
Problem: Product of Array Except Self
Approach:
- Brute Force: Iterate through array using two loops and calculate product leaving when i == j
- Optimal Solution: Take one vector from left and other from right and multiply elements into it for 'i'th index by taking elements at left of it and at right of it
Time Complexity: O(n)
Space Complexity: O(n)
*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n);
    vector<int> left(n);
    vector<int> right(n);
    
    left[0] = 1;
    for(int i = 1; i < n; i++){
        left[i] = left[i-1] * nums[i-1];
    }
    right[n-1] = 1;
    for(int i = n-2; i >= 0; i--){
        right[i] = right[i+1] * nums[i+1];
    }
    for(int i = 0; i < n; i++){
        ans[i] = left[i] * right[i];
    }
    return ans;
}

int main(){
    vector<int> nums = {1,2,3,4};

    vector<int> ans = productExceptSelf(nums);

    for(int val : ans){
        cout<<val<<" ";
    }
}