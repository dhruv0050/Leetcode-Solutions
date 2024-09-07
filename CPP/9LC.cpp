/*Given an integer x, return true if x is a 
palindrome , and false otherwise.

Example 1:
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.*/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        string v=s;
        reverse(s.begin(),s.end());
        return (s==v)?1:0;
    }
};