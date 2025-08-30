/*                    
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity.

Example 1:
Input: nums = [1,3,5,6], target = 5
Output: 2
  
Example 2
Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4
 
Constraints:
1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums contains distinct values sorted in ascending order.
-104 <= target <= 104
  */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        nums.push_back(target);
        sort(nums.begin(),nums.end());
        return (find(nums.begin(),nums.end(),target)-nums.begin());
    }
};
int main(){
      Solution s;
    vector<int> nums = {1, 3, 5, 6};
    cout << s.searchInsert(nums, 5) << endl; // 2
    cout << s.searchInsert(nums, 2) << endl; // 1
    cout << s.searchInsert(nums, 7) << endl; // 4
    cout << s.searchInsert(nums, 0) << endl; // 0
    return 0;
}
