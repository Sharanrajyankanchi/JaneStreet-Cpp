                                39.Longest Palindromic Substring
/*
Given a string s, return the longest palindromic substring in s.
Example 1:
Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.

Example 2:
Input: s = "cbbd"
Output: "bb"

Constraints:
1 <= s.length <= 1000
s consist of only digits and English letters.
  */
class Solution {
public:
    string longestPalindrome(string s) {
        if(s.empty()) return "";int n=s.size();int t=0,m=1;
        auto ispdrome=[&](int l,int r)->void{
        while(l>=0 && r<n && s[l]==s[r]){
             if(m<r-l+1){ m=r-l+1;t=l;}
             l--;r++;
        }

};
        for(int i=0;i<n;i++){
            ispdrome(i,i);
            ispdrome(i,i+1);
        }
        return s.substr(t,m);

    }
};
