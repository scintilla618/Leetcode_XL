class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target){
        int i = 0, n = nums.size() - 1, sum;
        while(i<n){
            sum = nums[i] + nums[n];
            if(sum == target) break;
            if(sum < target) ++i;
            else --n;
        }
    return vector<int> {i, n};
    }
};