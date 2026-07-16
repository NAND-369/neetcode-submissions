class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    vector<int>ans;
    int l=0,r=k-1;
    if(k==1){
        return nums;
    }
    while(r<nums.size()){
        int max=INT_MIN;
        for(int i=l;i<=r;i++){
            if(nums[i]>max)
              max=nums[i];
        }
        ans.push_back(max);
        r++;
        l++;
    }    
    return ans;
    }
};
