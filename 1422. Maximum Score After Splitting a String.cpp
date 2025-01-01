class Solution {
public:
//max score after splitting string
    int maxScore(string s) {
        int maxS=0;
        int totalones=0;
        for( char c : s){
            if(c =='1') totalones++;
        }
        int left=0; 
        int right=totalones;
        for(int i=0; i<s.size()-1; i++){
            if(s[i]=='0'){
                left++;
            }
            else{
                right--;
            }
            if(maxS<left+right){
                maxS=left+right;
            }
        }
        return maxS;
    }
};
