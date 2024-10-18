/*Given an integer, convert it to a Roman numeral.

Example 1:

Input: num = 3749

Output: "MMMDCCXLIX"

Explanation:

3000 = MMM as 1000 (M) + 1000 (M) + 1000 (M)
 700 = DCC as 500 (D) + 100 (C) + 100 (C)
  40 = XL as 10 (X) less of 50 (L)
   9 = IX as 1 (I) less of 10 (X)
Note: 49 is not 1 (I) less of 50 (L) because the conversion is based on decimal places
Example 2:

Input: num = 58

Output: "LVIII"

Explanation:

50 = L
 8 = VIII */

 class Solution {
public:
    string intToRoman(int num) {
       string ans="";
       int val[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
       string roman[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
       while(num>0){
        for(int i=0;i<13;i++){
            if(num>=val[i]){
                ans+=roman[i];
                num-=val[i];
                break;
            }
        }
       }
       return ans;
    }
};