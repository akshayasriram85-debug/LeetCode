class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> pgcd(n);
        int mx=0;
        for(int i=0;i<n;i++){
            mx=max(mx,nums[i]);
            pgcd[i]=gcd(nums[i],mx);
        }
        long long ans=0;
        sort(pgcd.begin(),pgcd.end());
        int l=0,r=n-1;
        while(l<r){
            ans+=gcd(pgcd[l],pgcd[r]);
            l++;
            r--;
        }
        return ans;
    }
};