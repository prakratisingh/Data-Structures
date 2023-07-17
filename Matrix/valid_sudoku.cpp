//ques link: https://leetcode.com/problems/valid-sudoku/?envType=study-plan-v2&envId=top-interview-150
#include<bits/stdc++.h>
using namespace std;
class Solution 
{
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        unordered_set<string> row;
        unordered_set<string> col;
        unordered_set<string> mat;

        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                char curr = board[i][j];

                if(curr!='.')
                {
                    string row_str = to_string(i)+curr;
                    string col_str = to_string(j)+curr;
                    string mat_str = to_string(i/3) + to_string(j/3)+ curr;

                    if(row.count(row_str)||col.count(col_str)||mat.count(mat_str))
                        return false;
                    
                    row.insert(row_str);
                    col.insert(col_str);
                    mat.insert(mat_str);
                }
            }
        }
    return true;
    }
};