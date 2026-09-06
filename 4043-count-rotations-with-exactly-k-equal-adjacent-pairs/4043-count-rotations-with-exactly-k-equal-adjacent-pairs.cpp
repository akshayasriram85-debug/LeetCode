class Solution {
public:
    int countRotations(string s, int k) {
        int n=s.size();
        int cnt=0;
        string temp=s;
        for(int i=0;i<n;i++){
            rotate(temp.begin(),temp.begin()+1,temp.end());
            int sc=0;
            for(int j=0;j<n-1;j++){
                if(temp[j]==temp[j+1]) sc++;
            }
            if(sc==k) cnt++;
        }
        return cnt;
    }
};