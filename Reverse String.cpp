class Solution {
public:
    void reverseString(vector<char>& s) {
        int size = s.size();
        int left = 0;
        int right = size-1;
        
        while(left < right) {
            int temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
    }
};
