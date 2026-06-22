class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        int m = 0;
        while(m < (int)nums.size() - count){
            if(nums[m] ==  val){
                count++;
                for(int j = m; j < (int)nums.size() - 1; j++){
                    nums[j] = nums[j+1];
                }
            } else {
                m++;
            }
        }
        return (nums.size() - count);
    }
};