class Solution {
private:
    void join(vector<int>&ldr,int left,int right){
        ldr[find(ldr,right)]=find(ldr,left);
    }
    int find(vector<int>&ldr,int node){
        if(ldr[node]!=node){
            ldr[node]=find(ldr,ldr[node]);
        }
        return ldr[node];
    }    
public:
    int findCircleNum(vector<vector<int>>& g) {
        int N=g.size();
        vector<int> ldr(N*N+2);
        for(int i=0;i<N*N+2;i++) ldr[i]=i;
        for(int c=1;c<=N;c++){
            for(int oc=1;oc<=N;oc++){
                if(c==oc) continue;
                if(g[c-1][oc-1]){
                    join(ldr,c,oc);
                }
            }
        }
        set<int> s;
        for(int c=1;c<=N;c++) s.insert(find(ldr,c));
        return s.size();
    }
};