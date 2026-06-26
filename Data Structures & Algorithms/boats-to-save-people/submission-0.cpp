class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int ans = 0, low = 0, right = people.size() - 1;
        while (low <= right) {
            int remain = limit - people[right--];
            ans++;
            if (low <= right && remain >= people[low]) {
                low++;
            }
        }
        return ans;
    }
};