class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            a[i]=nums[i]*nums[i]*1LL;
        }
        sort(a.begin(),a.end());
        long long ans=0;
        int k=n/2;
        for(int i=0;i<n;i++){
            if(i<k) ans-=a[i];
            else ans+=a[i];
        }
        return ans;
    }
};