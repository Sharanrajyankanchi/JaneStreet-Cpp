/*
                                              /  Parenthesis Checker  /
Difficulty: EasyAccuracy: 28.56%Submissions: 688K+Points: 2
Given a string s, composed of different combinations of '(' , ')', '{', '}', '[', ']', verify the validity of the arrangement.
An input string is valid if:
         1. Open brackets must be closed by the same type of brackets.
         2. Open brackets must be closed in the correct order.
Examples :
Input: s = "[{()}]"
Output: true
Explanation: All the brackets are well-formed.
Input: s = "[()()]{}"
Output: true
Explanation: All the brackets are well-formed.
Input: s = "([]"
Output: false
Explanation: The expression is not balanced as there is a missing ')' at the end.
Input: s = "([{]})"
Output: false
Explanation: The expression is not balanced as there is a closing ']' before the closing '}'.
Constraints:
1 ≤ s.size() ≤ 106
s[i] ∈ {'{', '}', '(', ')', '[', ']'}
*/

class Solution {
public:
    bool isBalanced(string k) {
        string st; // acts like a stack
        for (char c : k) {
            if (c == '(' || c == '[' || c == '{') {
                st.push_back(c);
            } else {
                if (st.empty()) return false;
                char top = st.back();
                if ((c == ')' && top != '(') ||
                    (c == ']' && top != '[') ||
                    (c == '}' && top != '{')) {
                    return false;
                }
                st.pop_back();
            }
        }
        return st.empty();
    }
};
