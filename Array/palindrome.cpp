class Solution {
public:
    bool isPalindrome(int x) {
        long long temp=x,rem;
        long long rev=0;
        while(temp>0)
        {
            rem=temp%10;
            rev=(rev*10)+rem;
            temp=temp/10;
        }
        if(rev==x)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};
