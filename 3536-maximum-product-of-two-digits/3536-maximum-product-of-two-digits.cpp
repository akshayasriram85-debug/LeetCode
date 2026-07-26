class Solution {
public:
    int maxProduct(int n) {
        int fm=INT_MIN;
        int sm=INT_MIN;
        while(n>0){
            int d=n%10;
            if(d>fm){
                sm=fm;
                fm=d;
            }
            else if(d>sm){
                sm=d;
            }
            n/=10;
        }
        return fm*sm;
    }
};