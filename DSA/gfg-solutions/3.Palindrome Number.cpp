/*                                     3.Palindrome Number
Given an integer x, return true if x is a palindrome, and false otherwise.
Example 1:
  
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.

Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

  Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 
Constraints:
-231 <= x <= 231 - 1 
  */
#include<iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        int p=x;long int s=0;
        if(x<0) return false;
        else{
            while(x>0){
                s*=10;s+=(x%10);x/=10;
            }
            if(s==p) return true;
        }
        return false;
    }
};
int main(){
      Solution sol;
    int x;
    cout << "Enter a number: ";
    cin >> x;
    if (sol.isPalindrome(x)) {
        cout << x << " is a palindrome.\n";
    } else {
        cout << x << " is not a palindrome.\n";
    }                                  
    return 0;
}
 
