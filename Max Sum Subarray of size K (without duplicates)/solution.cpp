class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        // since the value of k is already fiven which denotes tje length of the windoe 
        int n= arr.size();
        int window_sum= 0;
        // building the window 
        for(int i=0; i<k; i++) {
            window_sum += arr[i];
        }
        // slide 
        
        int max_sum= window_sum;
        
        for(int x= k; x<n; x++) {
            // include the value
            window_sum += arr[x];
            // sub the fisst value of the curr windoe 
            window_sum-= arr[x-k];
            // compare 
            max_sum= max(max_sum, window_sum);
        }
        return max_sum;
    }
};
