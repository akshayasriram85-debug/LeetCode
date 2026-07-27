class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ele1=nums[nums.size()-1],ele2=nums[nums.size()-2];
        return (ele1-1)*(ele2-1);
    }
};