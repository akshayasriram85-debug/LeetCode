class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0,one=0,two=0;
        for(int x:nums){
            if(x==0) z++;
            else if(x==1) one++;
            else two++;
        }
        for(int i=0;i<nums.size();i++){
            if(i>=0&&i<z) nums[i]=0;
            else if(i>=z&&i<one+z) nums[i]=1;
            else nums[i]=2;
        }
    }
};