class Solution {
public:
    bool checkDivisibility(int n) {
        int prod=1,sum=0,temp=n;
        while(temp>0){
            prod*=temp%10;
            sum+=temp%10;
            temp/=10;
        }
        sum+=prod;
        if(n%sum==0) return true;
        return false;
    }
};