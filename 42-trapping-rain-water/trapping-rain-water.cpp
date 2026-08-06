class Solution {
public:
    int trap(vector<int>& height) {
        int n= height.size();
        int leftMax=0; //hold the left max value 
        int rightMax=0; // hold the right max value 
        int left=0; // pointer
        int right=n-1;  // pointer 
        int water=0;
        while(left<right) {
            // cal the left max and right amx
            leftMax= max(leftMax, height[left]);
            
            rightMax= max(rightMax, height[right]);
            

            // check which is smaller : leftmax or rightmax to have deciding factor 
            if(leftMax <= rightMax) {
                water += leftMax- height[left];
                left++;
            }
            else {
                water += rightMax- height[right];
                right--;
            }

        }
        return water;
    }
};