/*                                       5.Last Common Prefix
Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".
Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 
Constraints:
1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters if it is non-empty.*/
class Solution {
public:
    string common(string a, int A, string b, int B) {
        string s = "";
        for(int i = 0; i < min(A, B); i++) {
            if(a[i] == b[i]) s += a[i];
            else break;
        }
        return s;
    }

    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";     // Defensive
        if (strs.size() == 1) return strs[0];  // Only one string — return it

        string s = common(strs[0], strs[0].length(), strs[1], strs[1].length());
        for(int i = 2; i < strs.size(); i++) {
            s = common(s, s.length(), strs[i], strs[i].length());
            if (s.empty()) break;  // Early exit
        }
        return s;
    }
};

int main() {
    Solution sol;
    vector<string> strs;

    // Example input
    strs = {"flower", "flow", "flight"};
    cout << "Longest Common Prefix: " << sol.longestCommonPrefix(strs) << endl;

    strs = {"dog", "racecar", "car"};
    cout << "Longest Common Prefix: " << sol.longestCommonPrefix(strs) << endl;

    return 0;
}
