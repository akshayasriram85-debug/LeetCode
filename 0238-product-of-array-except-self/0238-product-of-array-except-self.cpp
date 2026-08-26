class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pro=1,cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                cnt++;
                continue;
            }
            pro*=nums[i];
        }
        if(cnt > 1){   
            for(int i = 0; i < nums.size(); i++){
                nums[i] = 0;
            }
        }
        else if(cnt == 1){
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] != 0) nums[i] = 0;
                else nums[i] = pro;
            }
        }
        else{
            for(int i = 0; i < nums.size(); i++){
                nums[i] = pro / nums[i];
            }
        }
        return nums;
    }
};