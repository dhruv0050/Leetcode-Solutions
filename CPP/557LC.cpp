/*Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

 

Example 1:

Input: s = "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"
Example 2:

Input: s = "Mr Ding"
Output: "rM gniD" */


Approach-I
class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s); 
        string word;
        string out = "";
        
        while (ss >> word) {
            reverse(word.begin(), word.end());  
            
            if (!out.empty()) {
                out += " ";  
            }
            
            out += word;  
        }
        
        return out;
    }
};

Approach-II

class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word;
        stringstream ss(s); 
        while (ss >> word) {
            words.push_back(word);  
        }
        string out="";
        for(int i=0;i<words.size();i++){
            reverse(words[i].begin(),words[i].end());
            out=out+ words[i];
            if (i != words.size() - 1) {
                out += " ";
            }
        }
        return out;
    }
};