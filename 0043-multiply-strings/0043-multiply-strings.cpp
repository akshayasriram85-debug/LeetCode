class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0"){
            return "0";
        }
        int m = num1.size(), n = num2.size();
        vector<int> pos(m + n, 0);
        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int p1 = i + j, p2 = i + j + 1;
                int total = mul + pos[p2];
                pos[p2] = total % 10;
                pos[p1] += total / 10;
            }
        }
        string result;
        for (int d : pos) {
            if (!(result.empty() && d == 0))
                result += to_string(d);
        }

        return result;
    }
};