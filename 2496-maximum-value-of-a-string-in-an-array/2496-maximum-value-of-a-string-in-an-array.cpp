class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int ans=0;
        for (string &s:strs) {
            bool digit=true;
            int val=0;
            for (char c:s) {
                if (!isdigit(c)) {
                    digit=false;
                    break;
                }
                val=val*10+(c-'0');
            }
            if (digit)
                ans=max(ans,val);
            else
                ans=max(ans,(int)s.size());
        }
        return ans;
    }
};