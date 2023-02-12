//ques link = https://practice.geeksforgeeks.org/problems/set-bits0143/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

//the solution is smaller than the ques link :) 

class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        int count=0;
        while(N)
        {
            N = N&(N-1);
            count++;
        }
        return count;
    }
};