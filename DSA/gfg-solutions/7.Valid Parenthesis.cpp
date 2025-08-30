/*                   7.Valid Paranthesis
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:
Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.

Example 1:
Input: s = "()"
Output: true
  
Example 2:
Input: s = "()[]{}"
Output: true

Example 3:
Input: s = "(]"
Output: false

Example 4:
Input: s = "([])"
Output: true

Example 5:
Input: s = "([)]"
Output: false

Constraints:
1 <= s.length <= 104
s consists of parentheses only '()[]{}'.
  */
#include<iostream>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        string st = ""; // Simulated stack using string
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                st += c; // Push
            } else {
                if (st.empty()) return false; // No match
                char top = st.back();
                if ((c == ')' && top != '(') ||
                    (c == ']' && top != '[') ||
                    (c == '}' && top != '{')) return false;
                st.pop_back(); // Pop
            }
        }
        return st.empty(); // Stack must be empty if all matched
    }
};
int main() {
    Solution sol;
    string s = "([{}])";
    cout << (sol.isValid(s) ? "true" : "false") << endl;
    return 0;
}
