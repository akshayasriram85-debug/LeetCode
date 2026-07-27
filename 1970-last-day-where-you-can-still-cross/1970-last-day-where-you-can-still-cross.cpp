class Solution {
private:
    void join(vector<int>&leader,int left,int right){
        leader[find(leader,right)]=find(leader,left);
    }
    int find(vector<int>&leader,int node){
        if(leader[node]!=node){
            leader[node]=find(leader,leader[node]);
        }
        return leader[node];
    }
public:
    int latestDayToCross(int R, int C, vector<vector<int>>& cells) {
        vector<bool> water(R*C+2);
        vector<int> leader(R*C+2);
        for(int i=0;i<R*C+2;i++){
            leader[i]=i;
        }
        int dys=0;
        vector<vector<int>> diff={{-1,0},{0,-1},{1,1},{-1,-1},{-1,1},{1,-1},{0,1},{1,0}};
        for(vector<int> cell:cells){
            int row=cell[0],col=cell[1];
            row--;col--;
            water[row*C+col+1]=true;
            for(vector<int> d:diff){
                int ar=row+d[0],ac=col+d[1];
                if(ar>=0&&ar<R&&ac>=0&&ac<C&&water[ar*C+ac+1]){
                    join(leader,row*C+col+1,ar*C+ac+1);
                }
            }
            if(col==0){
                join(leader,0,row*C+col+1);
            }
            else if(col==C-1){
                join(leader,row*C+col+1,R*C+1);
            }
            if(find(leader,0)==find(leader,R*C+1)){
                break;
            }
            dys++;
        }
        return dys;
    }
};
