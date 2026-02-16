/*

Analysis

optimized: O(n)

I wasn't able to solve this. 
I was thinking of two pointer approach. 
I had to see the solution


*/

#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int k = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != val){
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
        
    }
};