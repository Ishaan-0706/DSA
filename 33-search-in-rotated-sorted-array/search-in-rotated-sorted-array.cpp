class Solution {
public:
    int search(vector<int>& a, int target) {
        int lo = 0;
        int hi = a.size() - 1;
        int ans = -1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (check(a, mid, target)) {
                if (a[mid] == target) {
                    return mid;
                }
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        return ans ;
    }
    bool check(vector<int>& a, int x, int find) {
        bool target_in_left = (find >= a[0]);
        bool mid_in_left = (a[x] >= a[0]);
        if (target_in_left == mid_in_left) {
            return a[x] >= find;
        }
        return target_in_left;
    }
};