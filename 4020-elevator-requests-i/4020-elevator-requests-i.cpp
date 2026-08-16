class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int time=0,currfloor=0;
        for(int req:requests){
            if(req==currfloor){
                continue;
            }
            else{
                time+=(abs(currfloor-req));
                currfloor=req;
            }
        }
        return time;
    }
};