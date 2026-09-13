
            while (num >= values[i]) {
                res += symbols[i];
                num -= values[i];
            }
        }

        return res;
    }
};
