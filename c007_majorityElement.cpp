class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        
        unordered_map<int, int> numCount;
        for (auto n:nums){
            if (numCount.find(n) != numCount.end()){
                numCount[n] += 1;
                if (numCount[n] > nums.size() / 2) return n;
            }
            else numCount.insert({n, 1});
        }
        
        return 0;
    }
};