class Solution {
public:
    int maxNumberOfFamilies(long long n, vector<vector<int>>& reservedSeats) {
        int maxcnt=0;
        map<int,vector<bool>> ts;
        for(vector<int> p:reservedSeats){
            int row=p[0],seat=p[1];
            if(ts.find(row)==ts.end())
                ts[row]=vector<bool>(11,true);
            ts[row][seat]=false;
        }
        maxcnt=(n-ts.size())*2;
        for(auto p:ts){
            int r=p.first;
            bool left=p.second[2]&&p.second[3]&&p.second[4]&&p.second[5];
            bool mid=p.second[4]&&p.second[5]&&p.second[6]&&p.second[7];
            bool right=p.second[6]&&p.second[7]&&p.second[8]&&p.second[9];
            if(left&&right)
                maxcnt+=2;
            else if(left||mid||right)
                maxcnt++;
        }
        return maxcnt;
    }
};