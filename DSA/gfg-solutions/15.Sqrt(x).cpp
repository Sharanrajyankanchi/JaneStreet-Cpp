/*
Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.
You must not use any built-in exponent function or operator.
For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
 
Example 1:
Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.

Example 2:
Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.
 
Constraints:
0 <= x <= 231 - 1
  }
#include<iostream>
  using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;
        long long low = 1, high = x/2, ans = 0;
        while (low <= high) {
            long long mid = (low + high) / 2;
            long long sq = mid * mid;
            if (sq == x) return mid;
            else if (sq < x) {
                ans = mid;      // store last valid root
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
};
