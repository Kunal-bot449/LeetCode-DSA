class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        for(int j = 1; j < n; j++) {
            if(nums[i] == 0) {
                if(nums[i] != nums[j]) {
                    nums[i] = nums[j];
                    nums[j] = 0;
                    i++;
                }
            }
            else {
                i++;
            }
        }
    }
};