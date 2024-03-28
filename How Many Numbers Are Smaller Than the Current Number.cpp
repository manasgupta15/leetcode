class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> count(101, 0); // Assuming elements in nums are in the range [0, 100]
        
        // Counting occurrences of each number
        for (int num : nums) {
            count[num]++;
        }

        // Calculating the number of elements smaller than each number
        vector<int> result(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            int smallerCount = 0;
            for (int j = 0; j < nums[i]; j++) {
                smallerCount += count[j];
            }
            result[i] = smallerCount;
        }
        return result;
    }
};
