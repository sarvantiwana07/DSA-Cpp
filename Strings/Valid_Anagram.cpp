/*
Problem: Valid Anagram
Approach:
- Compare frequency of characters in both the strings
Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string s, string t) {
    int n = s.length();
    int m = t.length();
    if(n!=m){
        return false;
    }
    unordered_map<char, int> freqs;
    unordered_map<char, int> freqt;
    for(char x: s){
        freqs[x]++;
    }
    for(char x: t){
        freqt[x]++;
    }
    return freqs == freqt;
}

int main(){
    string s = "anagram";
    string t = "nagaram";

    bool ans = isAnagram(s,t);
    if (ans)
    {
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    
}