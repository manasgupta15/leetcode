class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>result;
        unordered_map<int,int>countMap;

        for(int num : nums) {
            countMap[num]++;
        }

        for(const auto&pair : countMap) {
            if(pair.second == 2) {
                result.push_back(pair.first);
            }
        }
        return result;
    }
};
