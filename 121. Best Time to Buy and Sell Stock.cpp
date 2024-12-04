class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int minP=arr[0];
        int profit=0;
        for(int i=0; i<arr.size()-1;i++){
            if(arr[i]<minP) minP=arr[i];
            int curr_profit=arr[i+1]-minP;
            if(profit<curr_profit) profit=curr_profit;
        }
        return profit;
    }
};
