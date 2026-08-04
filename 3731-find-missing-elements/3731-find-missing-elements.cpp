class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int small=nums[0],large=nums[nums.size()-1];
        vector<int> res;
        for(int i=small+1;i<large;i++){
            if(count(nums.begin(),nums.end(),i)==0){
                res.push_back(i);
            }
        }
        return res;
    }
};