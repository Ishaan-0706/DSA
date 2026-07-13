class Solution {
public:
    int lengthOfLongestSubstring(string str) {
    unordered_set <char> s ;
    int len = 0 ;
    int l = 0 ;
    int r = 0 ;
    while(r < str.size()){
        while(s.find(str[r]) != s.end()){
            s.erase(str[l]);
            l++ ;
        }
        s.insert(str[r]) ;
        len = max(len , r - l   + 1 ) ;
        r++ ;
    }
    return len ;
    }
};