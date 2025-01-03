//recursive approach

class Solution {
public:
    int fib(int n) {
        if(n<=1) return n;
        return fib(n-1) + fib(n-2);
    }
};

//interative approach

class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        int t1=0, t2=1, t3=0;
        for(int i=0;i<n-1;i++){
            t3=t2+t1;
            t1=t2;
            t2=t3;
        }
        return t3;
    }
};
