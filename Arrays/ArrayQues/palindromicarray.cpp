//ques link: https://practice.geeksforgeeks.org/problems/palindromic-array-1587115620/1

bool checkPallin(int x)
{
    string s = to_string(x);
    for(int i=0;i<s.size()/2;i++)
    {
        if(s[i]!=s[s.size()-i-1])
            return false;
    }
        return true;
}
int PalinArray(int a[], int n)
{
    	// code here
    for(int i=0;i<n;i++)
    {
    	    if(!checkPallin(a[i]))
    	        return 0;
    }
    	    return 1;
    }
};