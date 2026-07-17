class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int>mpp;
    vector<int>ans;
    for(int i=0;i<nums.size();i++){
        mpp[nums[i]]=i;//value to index mapping
    }
    for(int i=0;i<nums.size();i++){
    int complement=target-nums[i];
    if(mpp.find(complement)!=mpp.end()){
        return{i,mpp[complement]};
      }
    }
    return {};

    }
};
