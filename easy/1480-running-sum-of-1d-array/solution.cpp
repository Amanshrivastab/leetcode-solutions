class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int res = 0;
        vector<int>ans;
        for(int i=0 ; i< nums.size(); i++){
            res = res + nums[i];
            ans.push_back(res);
        }
        return ans;
    }
};