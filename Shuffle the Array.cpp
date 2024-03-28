class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>shuffledArray;
        for(int i = 0;i<n;i++) {
            shuffledArray.push_back(nums[i]);
            shuffledArray.push_back(nums[i+n]);
        }
        return shuffledArray;
    }
};
