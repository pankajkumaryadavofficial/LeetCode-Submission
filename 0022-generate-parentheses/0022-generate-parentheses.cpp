class Solution {
public:
    vector<string> generateParenthesis(int n) {
        
        vector<string> ans;

        function<void(string, int, int)> backtrack =
            [&](string s, int open, int close) {

            // n pairs complete
            if (s.length() == 2 * n) {
                ans.push_back(s);
                return;
            }

            // Add '(' if we still have opening brackets
            if (open < n) {
                backtrack(s + "(", open + 1, close);
            }

            // Add ')' only when it won't make brackets invalid
            if (close < open) {
                backtrack(s + ")", open, close + 1);
            }
        };

        backtrack("", 0, 0);

        return ans;
    }
};