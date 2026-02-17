/*

Analysis

optimized: O(log n)

My Approach: O(log n), i couldn't figure out the return low. I was checking if nums[low] would be greater than or less than target.
creatd heap buffer overflow. low and high might endup in the index that is out of range for array



*/


class Solution {
public:
    
int searchInsert(vector<int> &nums, int target){
    int low = 0;
    int high = nums.size() - 1;

    while (low <= high){
        int mid = low + (high - low) / 2;
        if (nums[mid] == target){
            return mid;
        }
        else if (nums[mid] > target){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return low;
}
};