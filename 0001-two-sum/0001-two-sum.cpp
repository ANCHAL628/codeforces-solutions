class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       // unordered_map<int,int>mp ;
       //  vector<int>answer ;
       // for(int i = 0 ; i < nums.size() ; i++) {
       //     if(mp.find(target-nums[i]) != mp.end()){
       //        answer.push_back(i) ;
       //        answer.push_back(mp[target-nums[i]]) ;
       //     }
       //     mp[nums[i]] = i ;
       // }
       //  return answer ;
       //  ///\
        //
        vector<int>ans ;
        for(int i = 0 ; i < nums.size() ; i++){
            int answer = 0 ;
            for(int j = i+1 ; j < nums.size() ; j++){
                answer = nums[i]+nums[j] ;
                if(answer == target){
                    ans.push_back(j) ;
                    ans.push_back(i) ;
                    return ans ;
                }
            }
        }
        //
        return ans ;
    }
};
//three approaches : O(n^2)
//approch no two :sort krke two pointer
//  o(N)- mapping 
//