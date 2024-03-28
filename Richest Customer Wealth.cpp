class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        for(const auto& customerAccounts : accounts) {
            int wealth = accumulate(customerAccounts.begin(),customerAccounts.end(),0);
            maxWealth = max(maxWealth,wealth);
        }
        return maxWealth;
    }
};
