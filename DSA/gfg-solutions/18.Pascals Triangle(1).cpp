/*                                          18.Pascals Triangle
Given an integer numRows, return the first numRows of Pascal's triangle.
In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

Example 1:
Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

Example 2:
Input: numRows = 1
Output: [[1]]
 
Constraints:
1 <= numRows <= 30
  */
#include<iostream>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        for(int i=0;i<numRows;i++){
            vector<int> s(i+1,1);
            for(int j=1;j<i;j++){
                s[j]=v[i-1][j-1]+v[i-1][j];
            }
            v.push_back(s);
        }

return v;
}
};
int main(){
    Solution sol;
    int numRows;
    cout << "Enter number of rows: ";
    cin >> numRows;
    vector<vector<int>> result = sol.generate(numRows);
    cout << "Pascal's Triangle:\n";
    for (const auto& row : result) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
