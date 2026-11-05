class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1,vector<int>& arr2,int d) {
        int n=0;
        for(int i:arr1){
            bool a=false;
            for(int j:arr2){
                if(abs(i-j)<=d) {
                    a=true;
                    break;
                }
            }
            if(a==false) n++;
        }
        return n;
    }
};