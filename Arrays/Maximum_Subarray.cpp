/*
Problem: Maximum Subarray
Approach:
- Kadane's Algorithm
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<iostream>
#include<vector>

int maxSubArray(vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    int maxi = nums[0];

    for(int i = 0; i < n; i++){
        sum += nums[i];
        maxi = max(maxi, sum);
        if(sum < 0){
            sum = 0;
        }
    }
    return maxi;
}

int main(){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int ans = maxSubArray(nums);

    cout<<"Maximum sum is: "<<ans;
}