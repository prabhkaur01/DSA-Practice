class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // since we are partitioing the vector into two parts : zero part and non zero part
        // keeping the order same 
        // and we do not use any extra space as well
        // hence we use two pointers 


        int n=nums.size();
        int slow=0;
        for(int fast =0; fast <n; fast++) {
            if(nums[fast]!=0) {
                swap(nums[slow], nums[fast]);
                slow++;
            }
        }
        
    }
};