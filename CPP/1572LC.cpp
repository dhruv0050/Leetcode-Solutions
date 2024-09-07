/*Given a square matrix mat, return the sum of the matrix diagonals.
Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal.

Example 1:
Input: mat = [[1,2,3],
              [4,5,6],
              [7,8,9]]
Output: 25
Explanation: Diagonals sum: 1 + 5 + 9 + 3 + 7 = 25
Notice that element mat[1][1] = 5 is counted only once.
Example 2:

Input: mat = [[1,1,1,1],
              [1,1,1,1],
              [1,1,1,1],
              [1,1,1,1]]
Output: 8
Example 3:

Input: mat = [[5]]
Output: 5 */

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
    int n = mat.size();
    int prim_diag = 0;
    int sec_diag = 0;
    for(int i = 0; i < n; i++) {    
        prim_diag+=mat[i][i];
        sec_diag+=mat[i][n - 1 - i];
    }
    if (n % 2 != 0) {
        prim_diag += sec_diag - mat[n / 2][n / 2];
    }
    else{
        prim_diag+=sec_diag;
    }

    return prim_diag;
    }
};