/*
Problem: Top K Frequent Elements
Approach:
- Done using hashmap
Time Complexity: O(n^2)
Space Complexity: O(n)
*/

#include <iostream>
#include<vector>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> ans;
    unordered_map<int, int> freq;
    for(int i = 0; i < n; i++){
        freq[nums[i]]++;
    }
    for(int i = 0; i < k; i++){
        int maxFreq = 0;
        int element = -1;
        for(int j = 0; j < n; j++){
            if(freq[nums[j]] > maxFreq){
                maxFreq = freq[nums[j]];
                element = nums[j];
            }
        }
        ans.push_back(element);
        freq[element] = 0;
    }
    return ans;
}

int main(){
    vector<int> nums = {1,1,1,2,2,3};
    int k = 2;
    vector<int> ans = topKFrequent(nums, k);

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}