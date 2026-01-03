/*
Problem: Valid Palindrome
Approach:
- First lowercase the string, then add it to another string by reversing it and then compare
Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <iostream>
#include <string>
using namespace std;

string lowercase(string s)
{
    string p = "";
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
        {
            p.push_back(s[i]);
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            int ch = s[i] - 'A';
            char a = ch + 'a';
            p.push_back(a);
        }
    }
    return p;
}
bool palindrome(string p)
{
    string m = lowercase(p);
    int len = m.length() - 1;
    string n = "";
    while (len != -1)
    {
        n.push_back(m[len]);
        len--;
    }
    string a = n;
    if (n != m)
    {
        return false;
    }
    return true;
}

int main()
{
    string s = "A man, a plan, a canal: Panama";
    bool ans = palindrome(s);
    if (ans)
    {
        cout << "Yes it is palindrome";
    }
    else
    {
        cout << "No it is not a palindrome";
    }
    return 0;
}
