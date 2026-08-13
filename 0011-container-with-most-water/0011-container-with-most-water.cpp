class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxarea=0;
        int lt=0,rt=n-1;
        while(lt<rt){
            int curr=min(height[lt],height[rt])*(rt-lt);
            if(curr>maxarea) maxarea=curr;
            if(height[lt]<=height[rt]) lt++;
            else rt--;
        }

        return maxarea;
    }
};