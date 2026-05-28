class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size()-1;
        int area = 0;
        while (i < j) {
            int newArea = min(heights[j], heights[i]) *(j - i);
            area = max(area,newArea);
            if(heights[i]<heights[j]) i++;
            else j--;
        }
        return area;
    }
};
