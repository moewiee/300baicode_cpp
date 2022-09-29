class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int runningXor = 0;
        for (auto n:nums) runningXor ^= n;
        return runningXor;
    }
};