class Solution {
public:
    void sortColors(vector<int>& nums) {
       //approach 1 : take are first store all zeroes then store all one and then all zeroes 2
       //approach 2 : use sorting that is nlogn
      //approach 3 : use three pointer that is low mid high to keep count in the approach
        int low = 0 ;
        int mid = 0; 
        int high = nums.size()-1 ;
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low],nums[mid]) ;
                mid++ ;
                low++ ;
            }else if(nums[mid] == 1){
                mid++ ;
            }else if(nums[mid] == 2){
                swap(nums[mid],nums[high]) ;
                high-- ;
              //  mid++ ;
            }
        }
    }
};