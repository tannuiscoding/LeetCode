class Solution {
public:
    void reverse(vector<char>&s, int start, int end){
        if(start>=end) return;
        int temp= s[start];
        s[start]=s[end];
        s[end]=temp;
        return reverse(s, start+1, end-1);
    }
    void reverseString(vector<char>& s) {
        int n=s.size()-1;
        int start=0;
        reverse(s, start, n);
    }
};
