class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int insertIndex = 1;
        for(int i = 1;i<nums.size();i++) {
            // we skip to next index if we see a duplicate element
            if(nums[i-1] != nums[i]) {
                nums[insertIndex] = nums[i];
                insertIndex++;
            }
        }
        return insertIndex;
    }
};
