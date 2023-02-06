//ques link: https://leetcode.com/problems/delete-columns-to-make-sorted-ii/description/
#include<vector>
#include<stdio.h>
#include<string>
using namespace std;
class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
    if(strs.size() == 1) 
    return 0;
    vector<int> v;
    for(int i = 1; i != strs.size(); i++) 
    v.push_back(i);
    
    int ans = 0;
    for(int j = 0; j != strs[0].size(); j++){
      vector<int> t;
      for(auto i: v)
        if(strs[i][j] < strs[i-1][j]) 
        goto mark;
        else if(strs[i][j] == strs[i-1][j]) 
        t.push_back(i);
      
      if(t.empty()) 
      return j - ans;
      ans++;
      v = t;
      
      mark:;
    }
   
    return strs[0].size() - ans;
  }
};