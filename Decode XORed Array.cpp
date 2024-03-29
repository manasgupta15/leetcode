class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>orrArr;
        orrArr.push_back(first);
        for(int i = 0;i<encoded.size();i++) {
           int decoded = orrArr[i] ^ encoded[i];
            orrArr.push_back(decoded);
        }
        return orrArr;
    }
};
