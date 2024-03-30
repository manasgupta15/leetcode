class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
       string concatenate1 = "";
       for(string& word : word1) {
        concatenate1+=word;
       }

       string concatenate2 = "";
       for(string& word : word2) {
        concatenate2+=word;
       }

       return concatenate1 == concatenate2;
    }
};
