class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int>mp ;
        vector<int>answer ;
       for(int i = 0 ; i < nums.size() ; i++) {
           if(mp.find(target-nums[i]) != mp.end()){
              answer.push_back(i) ;
              answer.push_back(mp[target-nums[i]]) ;
           }
           mp[nums[i]] = i ;
       }
        return answer ;
        ///
    }
};
//tc : O(n)
//////////
///

//