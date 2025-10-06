                                        26.Isomorphic Strings
/*
Given two strings s and t, determine if they are isomorphic.
Two strings s and t are isomorphic if the characters in s can be replaced to get t.
All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.
 
Example 1:
Input: s = "egg", t = "add"
Output: true

Explanation:
The strings s and t can be made identical by:
Mapping 'e' to 'a'.
Mapping 'g' to 'd'.
  
Example 2:
Input: s = "foo", t = "bar"
Output: false
Explanation:
The strings s and t can not be made identical as 'o' needs to be mapped to both 'a' and 'r'.

Example 3:
Input: s = "paper", t = "title"
Output: true
  
Constraints:
1 <= s.length <= 5 * 104
t.length == s.length
s and t consist of any valid ascii character.
  */


#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        int p[256]={0},q[256]={0};
        for(int i=0;i<s.size();i++){

            if(p[s[i]]!=0 && p[s[i]]!=t[i]) return false;
            if(q[t[i]]!=0 && q[t[i]]!=s[i]) return false;
            p[s[i]]=t[i];q[t[i]]=s[i];
        }
        return true;
    }
};
int main(){
  Solution sol;
    string s, t;
    cout << "Enter string s: ";
    cin >> s;
    cout << "Enter string t: ";
    cin >> t;
    cout <<boolalpha<<sol.isIsomorphic(s, t) << endl;
    
}
