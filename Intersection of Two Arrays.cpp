class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> countMap1;
        unordered_map<int,int> countMap2;
        vector<int>result;

        for(int num1 : nums1) {
            countMap1[num1]++;
        }

        for(int num2 : nums2) {
            countMap2[num2]++;
        }



        for(const auto &pair : countMap1) {
            int num = pair.first;
            if(countMap2.find(num)!=countMap2.end()) {
                result.push_back(num);
            }
        }
        return result;
    }
};
