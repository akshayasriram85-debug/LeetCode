class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        sort(lights.begin(),lights.end());
        int light=lights[lights.size()-1];
        int ans=0;
        for(int i=0;i<arrivalTime.size();i++){
            int temp=arrivalTime[i]%period;
            if(temp>=light){
                ans=max(ans,period-temp);
            }
        }
        return ans;
    }
};