class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> negativeSquares = {1000000000};
        vector<int> positiveSquares;
        for (auto n:nums){
            if (n < 0) negativeSquares.push_back(n * n);
            else positiveSquares.push_back(n * n);
        }
        positiveSquares.push_back(1000000000);
        
        int negativeIdx = negativeSquares.size() - 1;
        int positiveIdx = 0;
        
        vector<int> result;
        
        while (positiveIdx < positiveSquares.size() and negativeIdx >= 0){
            if (positiveSquares[positiveIdx] <= negativeSquares[negativeIdx]){
                result.push_back(positiveSquares[positiveIdx]);
                positiveIdx++;
            }
            else {
                result.push_back(negativeSquares[negativeIdx]);
                negativeIdx--;
            }            
        }
        result.pop_back();
        
        return result;
    }
};