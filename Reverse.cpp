class Solution {
public:
    int reverse(int x) {
     long rem,rev=0,temp=x;
     while(temp!=0)
     {
        rem=temp%10;
        rev=(rev*10)+rem;
        temp=temp/10;
     } 
     if(rev>2147483647 || rev<-2147483648) return 0;
     return int(rev);
    
    }
};
