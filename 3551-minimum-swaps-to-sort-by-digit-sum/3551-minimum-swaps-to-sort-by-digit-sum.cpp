class Solution {
private:
    int digitSum(int x) {
        int sum = 0;

        while (x > 0) {
            sum += x % 10;
            x /= 10;
        }

        return sum;
    }
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        vector<tuple<int, int, int>> arr;
        for (int i = 0; i < n; i++) {
            arr.push_back({digitSum(nums[i]), nums[i], i});
        }
        sort(arr.begin(), arr.end());
        vector<int> home(n);
        for (int i = 0; i < n; i++) {
            int originalIdx = get<2>(arr[i]);
            home[originalIdx] = i;
        }
        int swaps = 0;
        for (int i = 0; i < n; i++) {
            while (home[i] != i) {
                int j = home[i];
                swap(home[i], home[j]);
                swaps++;
            }
        }
        return swaps;
    }
};