class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // sort+ one fix + two pinter 
        // since i != j != k -> indices can't be same 
        // but the values can be 

        // size 
        int n= nums.size();

        // sort 
        sort(nums.begin(), nums.end());

        // vector ans 
        vector<vector<int>> ans;

        for(int i=0; i< n; i++)  {
            // skip duplicate "fixed" elements
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            if (nums[i] > 0) break;

            int left= i+1;
            int right= n-1;
            int target= -nums[i];

            while(left <right) {
                int sum = nums[left] + nums[right];

                if(sum== target) {
                    ans.push_back({nums[i], nums[left], nums[right]});
                    // skip duplicates 
                    while(left< right && nums[left] == nums[left+1]) {left++;}
                    while(left <right && nums[right]== nums[right-1]){
                    right--;
                    }
                    left++;
                    right--;
                }
                else if (sum > target) {
                    right--;
                }
                else {
                    left++;
                }
            }
        }
        return ans;
    }
};