class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int size = nums.size();
        vector<int>result(size);
        for(int i = 0; i<size;i++) {
            result[i] = nums[nums[i]];
        }
        return result;
    }
};
