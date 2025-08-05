class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementsum = 0;
        int digitsum = 0;
        for(int i=0;i<nums.size();i++){
            elementsum += nums[i];
            int curr = nums[i];
            while(curr > 0){
                int lastdigit = curr%10;
                curr = curr/10;
                digitsum += lastdigit;
            }
        }
        return elementsum - digitsum;
    }
};
