class Solution {
public:
    int frq[26];
    bool isAnagram(string s, string t) {
        for (int i = 0; i < s.size(); i++) {
            frq[s[i] - 'a']++;
        }
        for (int j = 0; j < t.size(); j++) {
            frq[t[j] - 'a']--;
        }
        for (int i = 0; i < 26; i++) {
            if (frq[i])
                return false;
        }
        return true;
    }
};