class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n=arr.size();
        int nSum= (n*(n+1))/2;
        int sum=0;
        for(int i=0; i<n; i++){
            sum+=arr[i];
        }
        return nSum-sum;
    }
};
