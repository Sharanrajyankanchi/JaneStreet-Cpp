                                    54.Substring Matching pattern
/*
You are given a string s and a pattern string p, where p contains exactly one '*' character.
The '*' in p can be replaced with any sequence of zero or more characters.
Return true if p can be made a substring of s, and false otherwise.

Example 1:
Input: s = "leetcode", p = "ee*e"
Output: true
Explanation:
By replacing the '*' with "tcod", the substring "eetcode" matches the pattern.

Example 2:
Input: s = "car", p = "c*v"
Output: false
Explanation:
There is no substring matching the pattern.

Example 3:
Input: s = "luck", p = "u*"
Output: true
Explanation:
The substrings "u", "uc", and "uck" match the pattern.

Constraints:
1 <= s.length <= 50
1 <= p.length <= 50 
s contains only lowercase English letters.
p contains only lowercase English letters and exactly one '*'
  */
class Solution {
public:
    bool hasMatch(string s, string p) {
        int k = p.find('*');
        string pre = p.substr(0, k);
        string suf = p.substr(k + 1);
        if (k == p.size() - 1)
            return s.find(pre) != string::npos;

        size_t pos1 = s.find(pre);
        if (pos1 == string::npos) return false;

        size_t pos2 = s.find(suf, pos1 + pre.size());
        return pos2 != string::npos;
    }
};
