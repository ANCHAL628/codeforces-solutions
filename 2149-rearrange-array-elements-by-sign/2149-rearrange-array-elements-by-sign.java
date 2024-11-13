class Solution {
    public int[] rearrangeArray(int[] nums) {
        int even = 0 ,odd = 1;
        int n = nums.length;
        int ans[] = new int[n];
        for(int i=0; i<n; i++) {
            if(nums[i] < 0) {
                ans[odd] = nums[i];
                odd += 2;
            } else {
                ans[even] = nums[i];
                even += 2;
            }
        }
    
        return ans;

    }
}