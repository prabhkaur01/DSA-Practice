class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        // since the size of the window is fixed -> fixed sliding winodw approach 
        // remove the duplicates -> hashmap to keep a track of the freq 

        int n= nums.size();
        long long window_sum=0;
        long long max_sum=0;
        unordered_map<int, int>map;
        // build the window
        for(int i=0; i<k; i++) {
            window_sum+= nums[i];
            map[nums[i]]++;
        } 
        // checking is size of the hashmap is equal to k 
        // because we need only k values in the hashmap 
        if((int)map.size() == k) {
            max_sum = window_sum;
        }

        // slide 
        for(int j= k; j<n; j++) {
            // include to expand the window 
            window_sum += nums[j];
            // upadte the freq of the newly added el 
            map[nums[j]]++;
            // subtract the first el to get the new window 
            int remove_val= nums[j-k];
            window_sum-= remove_val;
            // dec the fre of the removed val
            map[remove_val]--;
            // there can be two possibilities now : 
            // if the fre  does not become zero -> then it is fine 
            // but if the freq become zero , then remove the el 
            if(map[remove_val]==0) {
                map.erase(remove_val);
            }
            // comapare 
            if((int) map.size() == k) {
                max_sum= max(max_sum, window_sum);
            }

        }

        return max_sum;
    }
};