class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int chunk=0;
        int maxV=0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]>=maxV){
                maxV=arr[i];
            }
            if(maxV==i){
                chunk++;
            }
        }
        return chunk;
    }
};
