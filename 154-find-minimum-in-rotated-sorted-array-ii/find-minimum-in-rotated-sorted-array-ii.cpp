class Solution {
public:
    int findMin(vector<int>& nums) {
        int lo = 0;
        int hi = nums.size()-1;
        int min_value = nums[0];
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            min_value = min(min_value, nums[mid]);
            if (nums[lo] == nums[mid] && nums[mid] == nums[hi]) {
                lo++;
                hi--;
                continue;
            }
            if (check(nums, mid, hi)) {
                lo = mid + 1;

            } else {
                hi = mid - 1;
            }
        }
        return min_value;
    }
    int check(vector<int>& a, int x, int hi) { return a[x] > a[hi]; }
};