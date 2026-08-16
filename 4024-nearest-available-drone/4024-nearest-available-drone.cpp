class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int N=drones.size();
        int tx=target[0],ty=target[1];
        int minvalue=INT_MAX;
        vector<int> nearest(N,-1);
        for(int i=0;i<N;i++){
            int x=drones[i][0],y=drones[i][1],range=drones[i][2];
            int dist=abs(tx-x)+abs(ty-y);
            if(dist<=range){
                nearest[i]=dist;
                minvalue=min(minvalue,dist);
            }
        }
        for(int i=0;i<N;i++){
            if(nearest[i]==minvalue) return i;
        }

        return -1;
    }
};