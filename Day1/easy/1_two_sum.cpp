/*

Analysis

optimized: O(n)

my first approach: O(n^2)


*/
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++){
            if(mp.find(target - nums[i]) != mp.end()){
                return {mp.at(target - nums[i]), i};
            } else {
                mp.emplace(nums[i], i);
            }
        }

        return {};
        
    }
};

