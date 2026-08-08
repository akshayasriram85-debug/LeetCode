class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> trustest(n+1,0);
        vector<int> judge(n+1,0);
        for(auto it:trust){
            int x=it[0],y=it[1];
            trustest[x]++;judge[y]++;
        }
        for(int i=1;i<=n;i++){
            if(judge[i]==n-1 && trustest[i]==0) return i;
        }
        return -1;
    }
};