https://leetcode.com/problems/power-of-two/submissions/1246797167/


class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        int ans = 1;
        for(int i = 0; i <= 30; i++)
        {
            if(ans == n)
            {
                return true;
            }
            if(ans < INT_MAX/2)
            ans = ans * 2;
        }
        return false;
    }
};
