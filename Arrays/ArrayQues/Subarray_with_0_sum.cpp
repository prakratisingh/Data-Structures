//ques link = https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1

class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        int s = 0;
        int f = 0;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            s = s+arr[i];
            if(s==0 || arr[i]==0 ||m[s]==1)
            {
                f=1;
                break;
            }
            else
            {
                m[s]=1;
            }
        }
        if(f==1)
        return true;
        else
        return false;
    }
};