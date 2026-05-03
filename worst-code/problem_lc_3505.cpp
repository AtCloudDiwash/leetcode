using namespace std;

class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        vector<vector<int>> storage;

        if (nums.size() == 1) {
            return 0;
        }

        if (nums[0] <= nums[1] && nums.size() == 2) {
            return 0;
        }

        if (nums.size() == 2) {
            if (nums[0] <= nums[1]) {
                return 0;
            } else {
                return 1;
            }
        }

        if (nums[0] > nums[1] && nums.size() == 2) {
            return 1;
        }

        int result = 0;
        while (nonDecChecker(nums)) {
            vector<vector<int>> storage;
            sumPairCollector(storage, nums);
            pairSumSwapper(result, storage, nums);
        }

        return result;
    }

    // pair-sum swapper
    void pairSumSwapper(int& result, vector<vector<int>>& storage,
                        vector<int>& nums) {
        int smallest = 0;
        for (int i = 0; i < storage.size(); i++) {
            if (storage[smallest][0] > storage[i][0]) {
                smallest = i;
            }
        }
        nums[storage[smallest][1]] = storage[smallest][0];
        nums.erase(nums.begin() + storage[smallest][1] + 1);
        storage.clear();
        result++;
    }

    // This block checks if there are non-decreasing element
    bool nonDecChecker(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                return true;
            }
        }
        return false;
    }

    // pair sum collector from nums array at a given state
    void sumPairCollector(vector<vector<int>>& storage, vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            storage.push_back({nums[i] + nums[i + 1], i});
        }
    }
};