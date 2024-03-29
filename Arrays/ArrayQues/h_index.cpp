//ques link: https://leetcode.com/problems/h-index/?envType=study-plan-v2&envId=top-interview-150
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int hIndex(vector<int>& citations) 
    {
        int s = 0, e = citations.size() - 1, avg;
        sort(begin(citations), end(citations));
        while (s <= e) 
        {
            if (citations[avg = (e + s) / 2] < citations.size() - avg) 
                s = avg + 1;
            else 
                e = avg - 1;
        }
        return citations.size() - s;
    }
};