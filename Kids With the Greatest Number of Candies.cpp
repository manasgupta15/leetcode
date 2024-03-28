class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies = *std::max_element(candies.begin(),candies.end());
        vector<bool>result;
        for(int i = 0; i<candies.size();i++) {
            result.push_back(candies[i] + extraCandies >= maxCandies);
        }
        return result;
    }
};
