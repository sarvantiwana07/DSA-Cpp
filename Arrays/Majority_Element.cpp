/*
Problem: Majority Element
Approach:
- Brute Force: Take a int count, and iterate through nums using 2 loops, if nums[i] == nums[j], then increase count, and if count becomes greater than n/2, then it is the answer
- Optimal Solution: Boyer–Moore Method
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int count = 0;
    int candidate = 0;
    for(int num: nums){
        if(count == 0){
            candidate = num;
        }
        if(num == candidate){
            count++;
        }
        else{
            count--;
        }
    }
    return candidate;
}

int main(){
    vector<int> nums = {3,2,3};
    int ans = majorityElement(nums);

    cout<<"Majority element is: "<<ans;
}