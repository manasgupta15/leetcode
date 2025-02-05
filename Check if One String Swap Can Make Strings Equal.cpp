class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1 == s2) {
            return true; // If the strings are already equal, return true
        }

        vector<int>diffIndices;

        // Find the indices where characters are different

        for(int i = 0; i < s1.size(); i++) {
            if(s1[i] != s2[i]) {
                diffIndices.push_back(i);
            }
        }

        // if there are exactly two differences, check if swapping them fixes the string

        if(diffIndices.size() == 2) {
            swap(s1[diffIndices[0]], s1[diffIndices[1]]);
            return s1 == s2;
        }

        return false;
    }
};
