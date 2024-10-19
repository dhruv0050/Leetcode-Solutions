/*Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs){
        string ans="";
        for(int i=0;i<strs[0].size();i++){
            char c=strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(strs[j].size()<=i || c!=strs[j][i]){
                    return ans;
                }
            }
            ans+=c;
        }
        return ans;
    }
};