/*                                    20.Triangle
  Given a triangle array, return the minimum path sum from top to bottom.
For each step, you may move to an adjacent number of the row below. More formally, if you are on index i on the current row, you may move to either index i or index i + 1 on the next row.

Example 1:
Input: triangle = [[2],[3,4],[6,5,7],[4,1,8,3]]
Output: 11
Explanation: The triangle looks like:
   2
  3 4
 6 5 7
4 1 8 3
The minimum path sum from top to bottom is 2 + 3 + 5 + 1 = 11 (underlined above).

  Example 2:
Input: triangle = [[-10]]
Output: -10
 
Constraints:
1 <= triangle.length <= 200
triangle[0].length == 1
triangle[i].length == triangle[i - 1].length + 1
-104 <= triangle[i][j] <= 104
  */
#include<iostream>
using namespace std;
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {int n=triangle.size();
        // vector<int> p=triangle[n-1];
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<=i;j++){
                triangle[i][j]+=min(triangle[i+1][j],triangle[i+1][j+1]);
            }
        }
        return triangle[0][0];
    }
};
int main{
   Solution sol;
    int n;
    cout << "Enter number of rows in triangle: ";
    cin >> n;
    vector<vector<int>> triangle(n);
    cout << "Enter elements row by row:\n";
    for (int i = 0; i < n; i++) {
        triangle[i].resize(i + 1);
        for (int j = 0; j <= i; j++) {
            cin >> triangle[i][j];
        }
    }
    int result = sol.minimumTotal(triangle);
    cout << "Minimum total path sum = " << result << endl;
    return 0;
}
