class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int n = rain.size();
        int d = 0;
        std::vector<std::string> r(n);
        for (int i = 0; i < n; i++) {
            if (rain[i] == 0) {
                r[i] = "None";
                continue;
            }
            if (i == n - 1 || rain[i + 1] == 0) {
                r[i] = "Bob";
                d++;
                continue;
            }
            if (d >= 0) {
                r[i] = "Alice";
                d--;
                continue;
            }
            r[i] = "Bob";
            d++;
        }
        return r;
    }
};