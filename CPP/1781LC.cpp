/*The beauty of a string is the difference in frequencies between the most frequent and least frequent characters.

For example, the beauty of "abaacc" is 3 - 1 = 2.
Given a string s, return the sum of beauty of all of its substrings.

 

Example 1:

Input: s = "aabcb"
Output: 5
Explanation: The substrings with non-zero beauty are ["aab","aabc","aabcb","abcb","bcb"], each with beauty equal to 1.
Example 2:

Input: s = "aabcbaa"
Output: 17 */

class Solution {
public:
    int MinCount(vector<int>& freq) {
        int minCount = INT_MAX;
        for (int count : freq) {
            if (count != 0) {
                minCount = min(minCount, count);
            }
        }
        return minCount;
    }

    int MaxCount(vector<int>& freq) {
        int maxCount = 0;
        for (int count : freq) {
            maxCount = max(maxCount, count);
        }
        return maxCount;
    }

    int beautySum(string s) {
        int result = 0;
        for (int i = 0; i < s.size(); i++) {
            vector<int> freq(26, 0);  
            for (int j = i; j < s.size(); j++) {
                freq[s[j] - 'a']++;  
                int beauty = MaxCount(freq) - MinCount(freq);
                result += beauty;  
            }
        }
        return result;
    }
};