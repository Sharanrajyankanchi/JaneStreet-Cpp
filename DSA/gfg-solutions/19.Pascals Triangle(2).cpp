/*                                     19.Pascals Triangle(2)
  Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.
In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

Example 1:
Input: rowIndex = 3
Output: [1,3,3,1]
  
Example 2:
Input: rowIndex = 0
Output: [1]
  
Example 3:
Input: rowIndex = 1
Output: [1,1]

Constraints:
0 <= rowIndex <= 33
 */
#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> v;
        for(int i=0;i<=rowIndex;i++){
            vector<int> s(i+1,1);
            for(int j=1;j<i;j++){
                s[j]=v[i-1][j-1]+v[i-1][j];
            }
            v.push_back(s);
        }
        return v[rowIndex];   
    }
};
int main(){
  Solution sol;
    int rowIndex;
    cout << "Enter row index: ";
    cin >> rowIndex;
    vector<int> row = sol.getRow(rowIndex);
    cout << "Row " << rowIndex << " of Pascal's Triangle: ";
    for (int num : row) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
