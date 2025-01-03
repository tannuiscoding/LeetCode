class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int count=0;
        long long totalsum=0;
        for(int num : nums){
            totalsum+=num;
        }
        long long leftsum=0;
        for(int i=0; i<nums.size()-1; i++){
            leftsum+=nums[i];
            long long rightsum= totalsum-leftsum;
            if(leftsum>=rightsum) count++;
        }
        return count;
    }
};
