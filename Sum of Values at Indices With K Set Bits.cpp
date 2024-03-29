class Solution {
public:
    int countSetBits(int n) {
        int count = 0;
        while(n>0) {
            if(n%2!=0) {
                count++;
            }
            n = n /2;
        }
        return count;
    }
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int indx = 0;
        int sum = 0;
        for(int n : nums) {
            int bits = countSetBits(indx++);
            if(bits == k) {
                sum += n;
            }
        }
        return sum;
    }
};
