#include "solution.h"


int Solution::searchInsert(std::vector<int>& nums, int target) {
    int lower_bound {0};
    int upper_bound {static_cast<int>(nums.size()) - 1};

    while (lower_bound < upper_bound) {
        int middle = (lower_bound + upper_bound) / 2;
        if (nums[middle] == target) {
            return middle;
        }
        if (nums[middle] < target) {
            lower_bound = middle + 1;
        }
        if (nums[middle] > target) {
            upper_bound = middle - 1;
        }
    
    }

    return nums[lower_bound] >= target ? lower_bound : lower_bound + 1;
}