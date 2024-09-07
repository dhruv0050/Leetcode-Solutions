//REMOVE DUPLICATES FROM SORTED ARRAY

/*Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).*/


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>a;
        for(int i=0;i<nums.size();i++){
            if(find(a.begin(),a.end(),nums[i])==a.end()){
                a.push_back(nums[i]);
            }
        }
        nums = a;
        return nums.size();
    }
};