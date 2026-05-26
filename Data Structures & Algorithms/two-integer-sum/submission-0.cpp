class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> res;
        for (int i = 0; i < nums.size(); i++){
            int num = nums[i];
            int need = target - num;
            if(res.find(need) != res.end()){
                return {res[need],i};
            }
            res[num] = i;
        }
        return {-1,-1};
    }
};
