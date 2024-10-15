/*A pangram is a sentence where every letter of the English alphabet appears at least once.
Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

Example 1:

Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
Output: true
Explanation: sentence contains at least one of every letter of the English alphabet.
Example 2:

Input: sentence = "leetcode"
Output: false*/

class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool>alpha(26,0);
        for(int i=0; i<sentence.size(); i++){
            int index = sentence[i] - 'a';
            alpha[index] = 1;
        }
        for(int i=0; i<alpha.size();i++){
            if(alpha[i]==0) return false;
        }
        return true;
    }
};