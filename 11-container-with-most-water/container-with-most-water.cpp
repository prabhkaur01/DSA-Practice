class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int left=0;
        int right= n-1;
        int area_water=0;
        
        while(left < right) {
            int width= right-left;
            int height_area= min(height[left], height[right]);
            area_water = max(area_water, width*height_area);

            // movement 
            if(height[left] < height[right]) left++;
            else right--;
        }
        return area_water;
    }
};