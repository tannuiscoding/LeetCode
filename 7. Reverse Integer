class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        int sign = (x < 0) ? -1 : 1;
        x = abs(x);
        
        while (x > 0) {
            int digit = x % 10;
            x /= 10;
            if (rev > (INT_MAX - digit) / 10) {
                return 0; // Overflow case
            }
            rev = rev * 10 + digit;
        }
        return rev * sign;
    }
};
