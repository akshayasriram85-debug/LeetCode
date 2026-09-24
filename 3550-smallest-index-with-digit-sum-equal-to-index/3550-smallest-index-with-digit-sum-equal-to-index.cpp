class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]<10 && nums[i]==i) return i;
            else{
                int sum=0,curr=nums[i];
                while(curr>0){
                    sum+=curr%10;
                    curr/=10;
                }
                if(sum==i) return i;
            }
        }
        return -1;
    }
};