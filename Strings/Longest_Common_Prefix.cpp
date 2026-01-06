/*
Problem:  Longest Common Prefix
Approach:
- Assume first string of strs as ans, and then pop elements from back till we get the required answer
Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <iostream>
#include<string>
#include<vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if(strs.size() == 0){
        return "";
    }
    string start = strs[0];

    for(int i = 1; i < strs.size(); i++){
        while(strs[i].find(start)!= 0){
            start.pop_back();
            if(start.empty()){
                return "";
            }
        }
    }
    return start;
}

int main(){
    vector<string> strs = {"flower","flow","flight"};

    string ans = longestCommonPrefix(strs);

    cout<<"Longest common prefix is: "<<ans;

    return 0;
}