/*
Problem: Maximum Product Subarray
Approach:
- Iterate through array and calculate product and then max product
Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include<iostream>
#include<vector>
using namespace std;

int maxProduct(vector<int>& nums) {
    int n = nums.size();
    int maxa = nums[0];

    for (int i = 0; i < n; i++) {
        int prod = 1;
        for (int j = i; j < n; j++) {
            prod *= nums[j];
            maxa = max(maxa, prod);
        }
    }
    return maxa;
}

int main(){
    vector<int> nums = {2,3,-2,4};

    int ans = maxProduct(nums);

    cout<<"Maximum product is: "<<ans;
}