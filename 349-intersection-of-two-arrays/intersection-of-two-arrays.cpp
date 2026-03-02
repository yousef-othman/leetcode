class Solution {
public:
    
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        vector<bool> vis(1001, 0);
        int n = nums1.size();
        int m = nums2.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[nums1[i]] && nums1[i] == nums2[j]) {
                    ans.push_back(nums1[i]);
                    vis[nums1[i]] = 1;
                }
            }
        }
        return ans;
    }
};