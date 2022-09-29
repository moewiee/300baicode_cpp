// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long lo = 1;
        long hi = n;
        long mid = 1;
        while (lo <= hi) {
            mid = (lo + hi) / 2;
            if (!isBadVersion(mid)) {
                lo = mid + 1;
            }
            else {
                if (!isBadVersion(mid - 1)){
                    return mid;
                }
                else hi = mid;
            }
        }
        
        
        return mid;
    }
};