/*Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

Example 1:

Input: nums = [3,0,1]
Output: 2
Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.
Example 2:

Input: nums = [0,1]
Output: 2
Explanation: n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums. */

//Approach 1
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expectedSum = (n * (n + 1)) / 2;
        int actualSum = accumulate(nums.begin(), nums.end(), 0);
        return expectedSum - actualSum;
    }
};

//Approach 2
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expectedSum = (n * (n + 1)) / 2;
        int sum = 0;
        for(int i =0;i<n;i++){
            sum = sum+nums[i];
        }
        return expectedSum - sum;
    }
};