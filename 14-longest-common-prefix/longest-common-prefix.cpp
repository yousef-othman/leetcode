class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int len = strs[0].size();
        int n = strs.size();
        for (int i = 1; i < n; i++) {
            len = min(len, int(strs[i].size()));
        }
        for (int i = 0; i < len; i++) {
            bool good = true;
            char c = strs[0][i];
            for (int j = 0; j < n; j++) {
                if (strs[j][i] != c)
                {
                    good = false;
                    break;
                }
            }
            if (good) ans+= c;
            else break;
        }
        return ans;
    }
};