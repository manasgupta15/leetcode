class Solution {
public:
    int majorityElement(vector<int>& nums) {


        /*
        int n = nums.size();
        int maxi = 0;
        int store = 0;
        
        unordered_map<int,int> mp;

        for(int element : nums) {
            mp[element]++;
        }

        for(auto &pair : mp) {
           if(pair.second > maxi) {
            maxi = pair.second;
            store = pair.first;
           }
        }
        return store;
        */

        sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n/2];
    }
};