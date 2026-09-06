                st.erase(s[left]);
                left++;
            }

            st.insert(s[right]);

            result = max(result, right - left + 1);
        }

        return result;
    }
};
