class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();// for size
        int xor1 = 0, xor2 =0; 
        for(int i =0;i<n;i++){// taking value and index fro 0 to n-1 for xor
            xor1^= nums[i];
            xor2^= (i+1); // cover n also

        }
        return xor1^xor2; // return missing value
    }
};
