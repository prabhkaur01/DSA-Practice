class Solution {
public:
    void sortColors(vector<int>& nums) {
        // whenever the question is about partitioning the array without using extra space, like zero, non-zero ; zero-one-two ; we have to use the two pointer but in same direction. 
        //and two pointer will start from same pount only , that is the starting point 

    int n= nums.size();
    int left =0;
    int mid=0;
    int high= n-1;

    while(mid <=high) {
        if(nums[mid]==0) {
            swap(nums[left], nums[mid]);
            left++;
            mid++;
        }
        else if(nums[mid]==1) {
            mid++;
        }
        else // mid ==2 
        {
            swap(nums[high], nums[mid]);
            high--;
        }
    }
    }
};