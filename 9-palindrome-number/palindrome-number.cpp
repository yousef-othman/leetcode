class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        } else {
            int tmp = x;
            long long rev = 0;
            while (tmp) {
                rev *= 10;
                rev += tmp % 10;
                tmp /= 10;
            }
            return x == rev;
        }
    }
};