class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int sz = flowerbed.size();

        if (n == 0) {
            return true;
        } else if (sz == 1) {
            if (flowerbed[0])
                return false;
            else return true;
        }
        if (n && !flowerbed[1] && !flowerbed[0]) {
            flowerbed[0] = 1;
            n--;
        }
        if (n && !flowerbed[sz - 2] && !flowerbed[sz - 1]) {
            flowerbed[sz - 1] = 1;
            n--;
        }
        for (int i = 1; n && i < sz - 1; i++) {
            if (!flowerbed[i] && !flowerbed[i - 1] && !flowerbed[i + 1]) {
                flowerbed[i] = 1;
                n--;
            }
        }
        return n == 0;
    }
};