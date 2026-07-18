class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mx=nums[0],mn=nums[0];
        for(int n:nums){
            mx=max(n,mx);
            mn=min(n,mn);
        }
        int a=mx,b=mn;
        while(b!=0){
            int temp=b;
            b=a%b;
            a=temp;
        }
        return a;
    }
};