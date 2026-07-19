class Solution {
public:
    int findMin(vector<int> &nums) {
    int l=0;
    int h=nums.size()-1;
    int ans=INT_MAX;
    while(l<=h){
        int m=l+(h-l)/2;
        //if the search space is already sorted then no  need of doing th same shit(BS)
        if(nums[l]<=nums[h]){
            ans=min(ans,nums[l]);
            break;
        }

        if(nums[l]<=nums[m]){
            ans=min(ans,nums[l]);
            l=m+1;
        }
        else{
            ans=min(nums[m],ans);
            h=m-1;
        }

    }
    return ans;
        
    }
};
