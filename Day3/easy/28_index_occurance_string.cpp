/*

Analysis

optimized: O(n)

My Approach: O(n)


*/


class Solution {
public:
int strStr(string haystack, string needle) {

if(haystack.size() < needle.size()){
    return -1;
}
    if(haystack.size() == 1 && needle.size() == 1 && needle == haystack){
        return 0;
    }
    
        for(int i = 0; i < haystack.size()-needle.size()+1; i++){
            if(needle == haystack.substr(i, needle.size())){
                return i;
            }
        }

        return -1;
    }
};