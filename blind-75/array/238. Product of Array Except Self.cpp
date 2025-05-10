class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left(nums.size(), 0);
        vector<int> right(nums.size(), 0);
        int mul1, mul2;
        for(int i = 0; i< nums.size(); i++){
            if(i == 0){
                mul1 = nums[i];
                left[0] = nums[i];
            } else{
                left[i] = mul1;
                mul1 = mul1*nums[i];
            }
        }
        for(int i = nums.size()-1; i>=0; i--){
            if(i == nums.size()-1){
                mul2 = nums[i];
                right[i] = nums[i];
            } else{
                right[i] = mul2;
                mul2 = mul2*nums[i];
            }
        }
        // return right;
        vector<int> ans(nums.size(), 0);
        for(int i = 0; i< nums.size(); i++){
            if(i == 0) ans[i] = right[i];
            else if(i == nums.size()-1) ans[i] = left[i];
            else{
                ans[i] = left[i]*right[i];
            }
        }
        
        return ans;



    }
};