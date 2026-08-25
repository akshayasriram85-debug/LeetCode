class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int st=k;
        while(1){
            if(count(nums.begin(),nums.end(),st)==0){
                return st;
            }
            st+=k;
        }
        return 0;
    }
};