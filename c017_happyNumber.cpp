class Solution {
public:
    int sumOfSquaredDigits(int n){
        int ret = 0;

        while (n){
            ret += (n % 10) * (n % 10);
            n = (n - n % 10) / 10;
        }
        
        return ret;
    }
    bool isHappy(int n) {
        unordered_set<int> seen;
        
        while (n != 1){
            if (seen.count(n)) return false;
            seen.insert(n);
            n = sumOfSquaredDigits(n);
        }
        
        return n == 1;
    }
};