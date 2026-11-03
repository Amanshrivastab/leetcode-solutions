class Solution {
public:
    string convert(string s, int numRows) {

        // Handle edge cases
        if (numRows == 1 || numRows >= s.length()) {
            return s;
        }

        // Create empty strings for each row
        vector<string> rows(numRows);

        int current_row = 0;
        bool going_down = false;

        // Traverse each character
        for (char ch : s) {

            rows[current_row] += ch;

            // Change direction at top or bottom
            if (current_row == 0 || current_row == numRows - 1) {
                going_down = !going_down;
            }

            // Move up or down
            current_row += going_down ? 1 : -1;
        }

        // Combine all rows
        string result = "";

        for (string row : rows) {
            result += row;
        }

        return result;
    }
};