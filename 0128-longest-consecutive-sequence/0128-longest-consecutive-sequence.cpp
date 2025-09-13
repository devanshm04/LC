class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int count = 1, longest = 1;

        for(int i=1; i<n; i++){
            int diff = nums[i] - nums[i-1];

            if(diff == 0) continue; // skip duplicates

            if(diff == 1){
                count++;
            } else {
                longest = max(longest, count);
                count = 1;
            }
        }
        return max(longest, count);
    }
};
