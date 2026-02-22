class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<array<int, 2>> v(n);
        for (int i = 0; i < n; i++) {
            v[i][0] = nums[i];
            v[i][1] = i;
        }
        sort(v.begin(), v.end());
        vector<int> ans(2);
        for (int i = 0, j = n - 1; i < j;) {
            if (v[i][0] + v[j][0] > target)
                j--;
            else if (v[i][0] + v[j][0] < target)
                i++;
            else {
                ans[0] = v[i][1];
                ans[1] = v[j][1];
                break;
            }
        }
        return ans;
    }
};