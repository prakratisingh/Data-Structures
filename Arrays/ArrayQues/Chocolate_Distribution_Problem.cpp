//ques link = https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
    long long res = a[m-1] - a[0];
    for(int i = 1; i+m-1 < n; i++){
        res = min(res, a[i+m-1]-a[i]);
    }
    return res;
}
};