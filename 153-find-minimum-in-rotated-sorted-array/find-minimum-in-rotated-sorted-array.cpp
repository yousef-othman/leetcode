class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = n - 1;
        while (l < r) {
            int md = (l + r) / 2;
            if (nums[md] < nums[r]) {
                r = md;
            } else {
                l = md + 1;
            }
        }
        return nums[l];
    }
};