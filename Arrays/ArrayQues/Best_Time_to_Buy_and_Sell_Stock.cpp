//Ques link = https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
#include<iostream>
#include<vector>
#define INT_MAX 1000000
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //current price stores price of stock currently and profit will store surrent profit
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