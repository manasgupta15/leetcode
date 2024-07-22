class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // first approach
       
        int m = matrix.size();
        int n = matrix[0].size();

        int i = 0;
        int j = n-1;

        while(i < m && j >= 0) {
            if(matrix[i][j] < target) {
                i++;
            }
            else if(matrix[i][j] > target) {
                j--;
            }
            else {
                return true;
            }
        }
        return false;

        

        // second approach
        int m = matrix.size();
        int n = matrix[0].size();

        int start = 0;
        int end = m * n - 1;

        while(start <= end) {
            int mid = start + (end-start)/2;

            if(matrix[mid/n][mid%n] == target) {
                return true;
            }
            else if(matrix[mid/n][mid%n] < target) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return false;
    }
};
