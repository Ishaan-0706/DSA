class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0 ;
        int ans = 0 ;
        for(auto x : nums){
            if(cnt==0){
                ans = x ;
            }
            if(x == ans ){
                cnt++ ;
            }else{
                cnt-- ;
            }
        }
        return ans ;
        
    }
};