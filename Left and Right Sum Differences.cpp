class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        std::vector<int> answer(nums.size());
        std::vector<int> left(nums.size());
        std::vector<int> right(nums.size());
        int leftSum = 0;
        int rightSum = 0;

        left[0] = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            leftSum += nums[i];
            left[i + 1] = leftSum;
        }

        std::reverse(nums.begin(), nums.end());

        right[0] = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            rightSum += nums[i];
            right[i + 1] = rightSum;
        }

        std::reverse(right.begin(), right.end());

        for (int i = 0; i < answer.size(); i++) {
            answer[i] = abs(left[i] - right[i]);
        }

        return answer;
    }
};
