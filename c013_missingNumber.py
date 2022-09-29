class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int totalSum = nums.size() * (nums.size() + 1) / 2;
        int runningSum = 0;
        for (auto n:nums) runningSum += n;
        return totalSum - runningSum;
    }
};