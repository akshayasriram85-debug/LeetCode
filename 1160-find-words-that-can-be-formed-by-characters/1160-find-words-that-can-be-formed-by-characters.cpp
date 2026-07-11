class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> freq(26, 0);
        for (char c:chars)
            freq[c-'a']++;
        int ans=0;
        for (string word:words) {
            vector<int> temp =freq;
            bool ok = true;
            for (char c : word) {
                if (temp[c - 'a'] == 0) {
                    ok = false;
                    break;
                }
                temp[c - 'a']--;
            }
            if (ok)
                ans += word.size();
        }
        return ans;
    }
};