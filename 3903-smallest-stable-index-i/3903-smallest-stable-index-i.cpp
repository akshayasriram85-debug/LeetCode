class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++){
            vector<int> left(nums.begin(), nums.begin()+i+1);
            vector<int> right(nums.begin() + i, nums.end());
            int max_left = *max_element(left.begin(), left.end());
            int min_right = *min_element(right.begin(), right.end());
            if (abs(max_left-min_right)<=k){
                return i;
            }
        }
        return -1;
    }
};