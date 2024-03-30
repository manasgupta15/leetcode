#include<bits/stdc++.h>
class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        std::vector<int> arr;

        while (!nums.empty()) {
            auto minA = std::min_element(nums.begin(), nums.end());
            if (minA != nums.end()) {
                int minValueA = *minA;
                nums.erase(minA);

                auto minB = std::min_element(nums.begin(), nums.end());
                if (minB != nums.end()) {
                    int minValueB = *minB;
                    nums.erase(minB);

                    arr.push_back(minValueB);
                    arr.push_back(minValueA);
                }
            }
        }
        return arr;
    }
};
