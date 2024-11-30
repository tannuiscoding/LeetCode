class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int uniqueCount = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1]!=nums[i]){
                nums[uniqueCount]=nums[i];
                uniqueCount++;
            }
        }
        return uniqueCount;
    }
};
