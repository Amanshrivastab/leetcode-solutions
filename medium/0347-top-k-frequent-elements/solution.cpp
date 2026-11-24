
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> hash;
        vector<int> ans;

        // Step 1: Count frequency
        for(int i = 0; i < nums.size(); i++) {
            hash[nums[i]]++;
        }

        // Step 2: Find maximum frequency k times
        for(int i = 0; i < k; i++) {

            auto maxIt = hash.begin();

            for(auto it = hash.begin(); it != hash.end(); it++) {

                if(it->second > maxIt->second) {
                    maxIt = it;
                }
            }

            ans.push_back(maxIt->first);
            hash.erase(maxIt);
        }

        return ans;
    }
};