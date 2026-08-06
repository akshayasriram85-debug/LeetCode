class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true){
            int temp=n,dig=1;
            while(temp){
                dig*=temp%10;
                temp/=10;
            }
            if(dig%t==0) return n;
            n++;
        }
        return 0;
    }
};