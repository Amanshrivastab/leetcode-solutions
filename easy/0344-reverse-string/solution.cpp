class Solution {
public:
    void reverseString(vector<char>& s) {
        char hold;
        int size = s.size();
        int mid = size/2;
        int start =0;
        for (int i=size-1 ;i>= mid; i--){
            hold = s[i];
            s[i] = s[start];
            s[start] = hold;
            start++;

        }

    }
};