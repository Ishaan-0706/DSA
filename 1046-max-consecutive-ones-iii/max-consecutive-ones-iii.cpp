class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int cnt_0 = 0 ;
        int l = 0 ;
        int r = 0 ;
        int len = 0 ;
      
        while(r < nums.size()){
            
            if(nums[r] == 0){
                cnt_0++;
            }
            while(cnt_0 > k ){
                if(nums[l] == 0 ){
                    cnt_0 -- ;
                   
                }
                l++ ;
            }
            len = max(len , r - l + 1) ;
            r++ ;
        }
        return len ;
        
    }
};