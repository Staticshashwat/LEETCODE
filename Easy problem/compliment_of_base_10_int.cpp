https://leetcode.com/problems/complement-of-base-10-integer/submissions/1246774759/


class Solution {
public:
    int bitwiseComplement(int n) {
        int m = n;
        if(m==0)
        {
            return 1;
        }
        int mask = 0;
        while(m!=0)
        {
            mask = (mask << 1)|1;
            m = m>>1;
        }
        int ans=(~n) & mask;

        return ans;
    }
    
};
