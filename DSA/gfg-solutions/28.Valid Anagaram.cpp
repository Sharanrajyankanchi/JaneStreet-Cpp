                                             28.Valid Anagaram
/*
Given two strings s and t, return true if t is an anagram of s, and false otherwise.
Example 1:
Input: s = "anagram", t = "nagaram"
Output: true

Example 2:
Input: s = "rat", t = "car"
Output: false

Constraints:
1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        int  a[256]={0},b[256]={0};
       for(char x:s){
        ++a[x];
       }
       for(char x:  t){
        ++b[x];
       }
       return equal(begin(a),end(a),begin(b));
    // if(s.size()!=t.size()) return false;
    // multiset<char> a,b;
    // for(int i=0;i<s.size();i++){
    //     a.insert(s[i]);
    //     b.insert(t[i]);
    // }
    // return equal(a.begin(),a.end(),b.begin());
    }

};
