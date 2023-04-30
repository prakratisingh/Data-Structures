//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/?envType=study-plan-v2&envId=top-interview-150
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curr_price = INT_MAX;
        int profit = 0;

        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<curr_price)
            curr_price = prices[i];
            if(prices[i]-curr_price>profit)
            profit = prices[i]-curr_price;
        }
        return profit;
    }
};