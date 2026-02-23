class Solution {
public:
    bool isPalindrome(string s) {
        string alphanumeric = "";
        for (char c : s) {
            if (isalpha(c) or c >= '0' && c <= '9')
                alphanumeric += c;
        }
        for (char& c : alphanumeric) {
            if (c >= '0' && c <= '9')
                continue;
            if (isupper(c)) {
                c = tolower(c);
            }
        }
        int len = alphanumeric.size();
        for (int i = 0, j = len - 1; i < j; i++, j--) {
            if (alphanumeric[i] != alphanumeric[j])
                return false;
        }
        return true;
    }
};