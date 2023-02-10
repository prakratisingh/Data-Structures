//Question link = https://practice.geeksforgeeks.org/problems/common-elements1132/1
#include<iostream>
#include<vector>
using namespace std;
class Solution
{
    public:    
       vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3)
        {
            //code here.
            int i = 0,j=0,k=0;
            vector<int> v;
            while(i<n1 && j<n2 && k<n3)
            {
                if(a[i]==b[j]&&b[j]==c[k])
                {
                    v.push_back(a[i]);
                    i++;
                    j++;
                    k++;
                }
                else if(a[i]<b[j])
                {
                    i++;
                }
                else if(b[j]<c[k])
                {
                    j++;
                }
                else k++;
                int x = a[i-1];
                while(a[i]==x) i++;
                int y = b[j-1];
                while(b[j]==y) j++;
                int z = c[k-1];
                while(c[k]==z) k++;
            }
            if(v.size()==0)
            {
                return {-1};
            }
            else{
            return v;}
        }

};