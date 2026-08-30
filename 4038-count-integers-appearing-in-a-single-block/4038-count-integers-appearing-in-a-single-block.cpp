class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int cnt=0;
        map<int,int> visited;
        for(int i=0;i<nums.size();i++){
            if(i==0||nums[i]!=nums[i-1]){
                visited[nums[i]]++;
            }
        }
        for(auto x:visited){
            if(x.second==1)
                cnt++;
        }
        return cnt;
    }
};