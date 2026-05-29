class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> arr;
        for (int num : nums) arr.push_back(num);
        for (int num : nums) arr.push_back(num);
        return arr;
    }
};