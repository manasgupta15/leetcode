class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
       vector<int> Count(n+1);
       for(vector<int> &vec : trust) {
           int u = vec[0];
           int v = vec[1];

           Count[u]--;
           Count[v]++;
       }

       for(int i = 1; i<=n; i++) {
           if(Count[i] == n-1) {
               return i;
           }
       }
       return -1;
    }
};
