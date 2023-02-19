//Ques link: https://leetcode.com/problems/reverse-integer/

#include<iostream>
#define INT_MAX 10000
#define INT_MIN 0
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long r=0;      
        while(x){
         r=r*10+x%10; 
         x=x/10;     
        }
        if(r>INT_MAX || r<INT_MIN) 
            return 0; 
        return int(r);
    }
};