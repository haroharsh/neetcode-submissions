class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pref = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            int j = 0;
            while (j < min(pref.length(), strs[i].length())) {
                if (pref[j] != strs[i][j]) {
                    break;
                }
                j++;
            }
            pref = pref.substr(0, j);
        }
        return pref;
    }
};