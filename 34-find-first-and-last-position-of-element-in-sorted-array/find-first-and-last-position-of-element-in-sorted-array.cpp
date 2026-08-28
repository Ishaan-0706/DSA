class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lo = 0;
        int hi = nums.size() - 1;
        int ans = -1;
        int first = -1;
        int Last = -1;
        vector<int> a(2, -1);
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (Check_First(nums[mid], target)) {
                ans = mid;
                if (nums[ans] == target) {
                    first = ans;
                }
                hi = mid - 1;

            } else {
                lo = mid + 1;
            }
        }
        if (first == -1) {
            return a;
        }
        lo = 0;
         hi = nums.size() - 1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (Check_Last(nums[mid], target)) {
                ans = mid;
                if (nums[ans] == target) {
                    Last = ans;
                }
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        if (Last == -1)
            return a;

        a[0] = first;
        a[1] = Last;
        return a;
    }
    int Check_First(int x, int find) { return x >= find; }
    int Check_Last(int x, int find) { return x <= find; }
};