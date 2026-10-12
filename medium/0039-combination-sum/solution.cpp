class Solution {
public:
 vector<vector<int>>ans;
        vector<int> path;

        void backtrack( vector<int>&candidates,int start ,int remaining){
            if(remaining == 0){
                ans.push_back(path);
                return ;
            }
            for(int i = start ; i < candidates.size() ; i++){
                if(candidates[i] > remaining ){
                    continue;
                }
                path.push_back(candidates[i]);

                backtrack(candidates,i,remaining-candidates[i]);

                path.pop_back();
            }
        }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       backtrack(candidates,0,target);
       return ans ;
    }
};