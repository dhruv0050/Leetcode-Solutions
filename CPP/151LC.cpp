/*Given an input string s, reverse the order of the words.

A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

Return a string of the words in reverse order concatenated by a single space.

Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

Example 1:

Input: s = "the sky is blue"
Output: "blue is sky the" */

class Solution {
public:
    string reverseWords(string s) {
        vector<string> ans;  
        string temp = "";
        int index = 0;

        while (index < s.size()) {
            if (s[index] == ' ') {
                if (!temp.empty()) {
                    ans.push_back(temp); 
                    temp.clear();  
                }
            } 
            else {
                temp += s[index]; 
            }
            index++;
        }
        if (!temp.empty()) {
            ans.push_back(temp);
        }
        reverse(ans.begin(), ans.end());
        
        string result = "";
        for (int i = 0; i < ans.size(); i++) {
            result += ans[i];
            if (i != ans.size() - 1) {
                result += " ";  
            }
        }
        
        return result;
    }
};
