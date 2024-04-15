class Solution {
public:
    int t[101];
    int solve(vector<int>& nums, int i,int n) {
        if(i>n) {
            return 0;
        }

        if(t[i]!=-1) {
            return t[i];
        }

        int steal = nums[i] + solve(nums,i+2,n);
        int skip = solve(nums,i+1,n);

        return t[i] = max(steal,skip);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) {
            return nums[0];
        }

        if(n==2) {
            return max(nums[0],nums[1]);
        }

        memset(t,-1,sizeof(t));

        // case-1 Take first house 0th index
        int take_0th_index_house = solve(nums,0,n-2);

         memset(t,-1,sizeof(t));

        // case-2 Take second house 1th index
        int take_1th_index_house = solve(nums,1,n-1);

        return max(take_0th_index_house,take_1th_index_house);
    }
};
