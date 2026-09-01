class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int lo = 0;
        int hi = nums.size() - 1;
        int ans = 0;

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (check(nums, mid)) {
                ans = mid;
                hi = mid - 1;

            } else {
                lo = mid + 1;
            }
        }
        return nums[ans];
    }
    bool check(vector<int>& nums, int x) {
        if (x % 2 == 0) {
            if (x + 1 >= nums.size()) {
                return true;
            }
            return nums[x] != nums[x + 1];
        } else {
            return nums[x] != nums[x - 1];
        }
    }
};