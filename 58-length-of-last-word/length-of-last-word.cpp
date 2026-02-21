class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string str;
        int len;
        while (ss >> str) {
            len = str.size();
        }
        return len;
    }
};