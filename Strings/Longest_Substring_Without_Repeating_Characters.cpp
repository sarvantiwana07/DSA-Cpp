/*
Problem: Longest Substring Without Repeating Characters
Approach:
- Done using sliding window concept
Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <iostream>
#include <string>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    unordered_map<char, int> st;
    int l = 0;
    int ans = 0;

    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if (st.count(c) && st[c] >= l)
        {
            l = st[c] + 1;
        }
        st[c] = i;
        ans = max(ans, i - l + 1);
    }
    return ans;
}

int main()
{
    string s = "abcabcbb";
    int ans = lengthOfLongestSubstring(s);
    cout << "Answer is: " << ans;
    return 0;
}