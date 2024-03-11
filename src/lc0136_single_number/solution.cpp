#include "solution.h"

int Solution::singleNumber(std::vector<int>& nums) {
    int single_number {};
    for (auto num: nums) {
        single_number ^= num;
    }
    return single_number;
}