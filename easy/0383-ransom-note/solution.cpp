class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        unordered_map<char, int> mp;

        // Count frequency of each character in magazine
        for(int i = 0; i < magazine.length(); i++) {
            mp[magazine[i]]++;
        }

        // Check characters required by ransomNote
        for(int i = 0; i < ransomNote.length(); i++) {

            if(mp[ransomNote[i]] == 0) {
                return false;
            }

            mp[ransomNote[i]]--;
        }

        return true;
    }
};