class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
           int n = nums.size();
        int max1 =0;
        int count =0;
        for(int i = 0;i<n;i++){
            if(nums[i] == 1){
                count++;
                max1 = max(max1,count);// update max1 if the count is greater
            }
            else{
                count =0; // set count 0 if other than 1 is found
            }
        }
        return max1;
    }
};