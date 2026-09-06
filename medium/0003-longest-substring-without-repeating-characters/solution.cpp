class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>st ;
        int left =0;
        int result = 0;

        for (int right = 0; right<s.length(); right++){
            while(st.find(s[right]) != st.end() ){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            result = max(result,right - left + 1);
        }
        return result ;
        
    }
};