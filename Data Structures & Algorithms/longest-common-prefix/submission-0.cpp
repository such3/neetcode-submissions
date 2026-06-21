class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string prefix = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            string exstr = strs[i];
            int j = 0;

            // compare current prefix with each string
            while (j < prefix.length() && j < exstr.length() && prefix[j] == exstr[j]) {
                j++;
            }

            // shrink prefix
            prefix = prefix.substr(0, j);

            // early exit if no prefix
            if (prefix == "") return "";
        }

        return prefix;
    }
};