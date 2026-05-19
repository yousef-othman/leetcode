class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        for (int i = 0; i < n; i++)  {
            int candidate = nums1[i];
            int l = 0, r = m - 1;
            while (l <= r) {
                int mid = l + (r - l) / 2;
                if (nums2[mid] == candidate)
                    return candidate;
                else if (nums2[mid] > candidate)
                    r = mid - 1;
                else
                    l = mid + 1;
            }
        }
        return -1;
    }
};