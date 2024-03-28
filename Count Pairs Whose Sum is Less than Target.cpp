class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int size = nums.size();
        int count = 0;
        for(int i = 0; i<size;i++) {
            for(int j = i+1; j<size;j++) {
                if(nums[i] + nums[j] < target) {
                    count++;
                }
            }
        }
        return count;
    }
};
