class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=-1888;
        int count = 0;
        for(int j=0;j<nums.size();j++){
            if(i!=nums[j]){
                count++;
                // cout << count << " "  << nums[j] <<endl;
                nums[count-1] = nums[j];
            }
           i = nums[j];
        }
        return count;
    }
};