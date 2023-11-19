class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Sort the array in ascending order
        int operations = 0;
        
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[i - 1]) {
                operations += (nums.size() - i); // Add the count of remaining elements
            }
        }
        
        return operations;
    }
};
