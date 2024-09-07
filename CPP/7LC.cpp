/*Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Example 1:
Input: x = 123
Output: 321

Example 2:
Input: x = -123
Output: -321 */

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int reverseNum = 0;
        bool isNegative = x < 0;
        x = abs(x);

        while(x > 0) {
            int digit = x % 10;
            if (reverseNum > (INT_MAX - digit) / 10) {
                return 0; 
            }
            reverseNum = (reverseNum * 10) + digit;
            x /= 10;
        }
        if (isNegative) {
            return -reverseNum;
        } 
        else {
            return reverseNum;
        }
    }
};