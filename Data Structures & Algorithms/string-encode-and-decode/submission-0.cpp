class Solution {
public:

    string encode(vector<string>& strs) {
        if (strs.empty()){
            return "";
        }
        vector<int> sizes;
        string ans;
        for (string& s : strs) {
            sizes.push_back(s.size());
        }
        for (int sz : sizes) {
            ans.append(to_string(sz));
            ans.push_back(',');
        }
        ans.push_back('#');
        for (string& s : strs) {
            ans.append(s);
        }
        return ans;
    }

    vector<string> decode(string s) {
        if (s.empty()) return {};
        vector<int> sizes;
        vector<string> ans;
        int i = 0;
        while (s[i] != '#') {
            int j = i;
            while (s[j] != ',') {
                j++;
            }
            sizes.push_back(stoi(s.substr(i, j - i)));
            i = j + 1;
        }
        i++;
        for (int sz : sizes) {
            ans.push_back(s.substr(i, sz));
            i += sz;
        }
        return ans;
    }
};
