                                           47.Find The Special Substring Of Length K
/*
You are given a string s and an integer k.
Determine if there exists a substring of length exactly k in s that satisfies the following conditions:
The substring consists of only one distinct character (e.g., "aaa" or "bbb").
If there is a character immediately before the substring, it must be different from the character in the substring.
If there is a character immediately after the substring, it must also be different from the character in the substring.
Return true if such a substring exists. Otherwise, return false.

Example 1:
Input: s = "aaabaaa", k = 3
Output: true
Explanation:
The substring s[4..6] == "aaa" satisfies the conditions.
It has a length of 3.
All characters are the same.
The character before "aaa" is 'b', which is different from 'a'.
There is no character after "aaa".

Example 2:
Input: s = "abc", k = 2
Output: false
Explanation:
There is no substring of length 2 that consists of one distinct character and satisfies the conditions.

Constraints:
1 <= k <= s.length <= 100
s consists of lowercase English letters only.
*/
class Solution {
public:
bool st(string &s,int &i,int &k){
    for(int j=i;j<i+k-1;j++){
                if(s[j]!=s[j+1]) return false ;
            }
            return true;
}
    bool hasSpecialSubstring(string s, int k) {int p=0;int t=s.size();
        if(t<k) return false;
        for(int i=0;i<=t-k;i++){
            if(!st(s,i,k))  continue;
                if(i!=0 &&s[i-1]==s[i])continue;
                if( i+k-1!=t-1 &&s[i+k-1]==s[i+k]) continue;
                return true;

        }
    
        return false;
    }
};
