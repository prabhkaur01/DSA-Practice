class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // since the elements are already sorted 
        // no extra space needed 

        int n= numbers.size();
        int left=0;
        int right= n-1;

        while(left < right) {
            int sum= numbers[left]+ numbers[right];
            if(sum== target) {
                return {left+1, right+1};
                left++;
                right--;
            }
            else if(sum > target) {
                right--;
            }
            else {
                left++;
            }
        }
        return {-1,-1};
    }
};