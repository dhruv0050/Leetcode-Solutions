/*Given an integer num, return the number of digits in num that divide num.
An integer val divides nums if nums % val == 0.

Example 1:
Input: num = 7
Output: 1
Explanation: 7 divides itself, hence the answer is 1.*/

class Solution {
public:
    int countDigits(int num) {
        int OGNum = num;
        int divd=0;
        while (num > 0){
            int digit = num%10;
            if(digit!=0 && OGNum%digit==0){
                divd++;
            }
            num/=10;
        }
    return divd;
    }
};