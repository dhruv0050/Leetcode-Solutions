/*Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

Example 1:
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4] */




//METHOD I
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp;
        int n = nums.size();
        k = k % n;
        for(int i = n - k; i < n; i++){
            temp.emplace_back(nums[i]);
        }
        for(int i = n - 1; i >= k; i--){
            nums[i] = nums[i - k];
        }
        for(int i = 0; i < k; i++){
            nums[i] = temp[i];
        }
    }
};

//METHOD II
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};