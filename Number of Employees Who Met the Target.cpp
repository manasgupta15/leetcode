class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count = 0;
        for(int elements : hours) {
            if(elements >= target) {
                count++;
            }
        }
        return count;
    }
};
