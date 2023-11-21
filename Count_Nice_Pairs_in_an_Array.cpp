
class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        const int MOD = 1e9 + 7;
        unordered_map<int, int> frequency;
        long long nicePairs = 0;

        for (int num : nums) {
            int diff = num - reverse(num);
            nicePairs = (nicePairs + frequency[diff]) % MOD;
            frequency[diff]++;
        }

        return static_cast<int>(nicePairs);
    }

private:
    int reverse(int num) {
        int reversed = 0;
        while (num > 0) {
            reversed = reversed * 10 + num % 10;
            num /= 10;
        }
        return reversed;
    }
};
