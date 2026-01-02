/*
Problem: Merge Sorted Array
Approach:
- Add elements into new array then make nums1 = new array
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int> ans;
    for(int i = 0; i < m; i++){
        ans.push_back(nums1[i]);
    }
    for(int i = 0; i < n; i++){
        ans.push_back(nums2[i]);
    }
    sort(ans.begin(), ans.end());
    nums1 = ans;
}

int main(){
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    int m = 3;
    int n = 3;

    merge(nums1, m, nums2, n);
    for(int i = 0; i < m+n; i++){
        cout<<nums1[i]<<" ";
    }

    return 0;
}