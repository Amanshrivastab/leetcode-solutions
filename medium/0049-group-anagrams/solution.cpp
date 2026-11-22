class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>hash;

        for(int i=0; i<strs.size(); i++){
            string temp = strs[i];
            sort( temp.begin(), temp.end());

            hash[temp].push_back(strs[i]);
        }

        vector<vector<string>>ans;

        for(auto it: hash){
            ans.push_back(it.second);
        }

        return ans ;
    }
};