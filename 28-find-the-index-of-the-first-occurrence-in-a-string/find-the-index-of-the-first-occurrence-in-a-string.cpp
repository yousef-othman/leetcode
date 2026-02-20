class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        if (m > n) {
            return -1;
        } else {
            int i = 0;
            while (i <= n - m) {
                int j = i; //0
                int k = 0;
                while (k < m && haystack[j] == needle[k]) {
                    j++, k++;
                }
                if (k == m)
                    return i;
                i++;
            }   
            return -1;
        }
    }
};