/*

Analysis

optimized: O(n)

My Approach:

I did solved it but it didn't use O(1) memory complexity


*/

#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;

        for(int i = 0; i < nums.size(); i++){
            if(mp.find(nums[i]) == mp.end()){
                mp[nums[i]] = true;
                nums[k] = nums[i];
                k++;
            } 
        }

        return k;
    }
};


// Leetcode solution

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1;
        for(int j=0;j<nums.size();++j){
            if(nums[j] != nums[i-1]){
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};


