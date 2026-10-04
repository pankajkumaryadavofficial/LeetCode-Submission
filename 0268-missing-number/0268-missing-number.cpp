class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int ans = 0;

        // XOR of array
        for(int i = 0; i < size; i++) {
            ans = ans ^ nums[i];
        }

        // XOR of 1 to size
        int x = 0;
        for(int i = 1; i <= size; i++) {
            x = x ^ i;
        }

        return ans ^ x;
    }
};