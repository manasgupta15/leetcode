class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sizeArray = nums.size();
        
        for (int i = 0; i <= sizeArray; i++) {
            if (i == sizeArray || nums[i] != i) {
                return i;
            }
        }
        
        // It's a good practice to have a return statement even if it's unreachable
        return -1; // or any other value as appropriate
    }
};
