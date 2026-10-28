
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int mapST[256] = {0};
        int mapTS[256] = {0};

        for (int i = 0; i < s.size(); i++) {
            unsigned char a = s[i];
            unsigned char b = t[i];

            if (mapST[a] != mapTS[b]) {
                return false;
            }

            mapST[a] = i + 1;
            mapTS[b] = i + 1;
        }

        return true;
    }
};

