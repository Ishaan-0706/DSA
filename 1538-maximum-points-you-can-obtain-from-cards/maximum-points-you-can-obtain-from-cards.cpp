class Solution {
public:
    int maxScore(vector<int>& c, int k) {
        int n = c.size() ;
        
        int rightsum = 0 ;
        int leftsum= 0 ;
        int maxsum=0;
     for(int i = n -1 ; i>=n-k ; i--){
        rightsum+=c[i] ;
     }
        maxsum=rightsum ;
        for(int i = 0 ; i < k ; i++){
            leftsum+=c[i] ;
            rightsum-=c[n-k+i];
            maxsum = max(maxsum , leftsum+rightsum) ;
        }
        return maxsum ;
    }
};