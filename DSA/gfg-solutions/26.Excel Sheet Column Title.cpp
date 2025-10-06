                                             26.Excel Sheet Column Title
/*   Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.
For example:
A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 
...
 
Example 1:
Input: columnNumber = 1
Output: "A"

Example 2:
Input: columnNumber = 28
Output: "AB"

Example 3:
Input: columnNumber = 701
Output: "ZY"

Constraints:
1 <= columnNumber <= 231 - 1
  */


#include<iostream>
using namespace std;
class Solution {
public:
    string convertToTitle(int columnNumber) {
        long long int t=columnNumber,i=26;string s="";
        while(t!=0){ t--;
         s=(char)('A'+(t%26))+s;
         t/=26;
        }
        return s;
    }
};
int main(){
    Solution sol;
    // Test examples
    int testCases[] = {1, 26, 27, 52, 701, 703, 18278};
    for (int n : testCases) {
        cout << sol.convertToTitle(n) << endl;
    }
}
