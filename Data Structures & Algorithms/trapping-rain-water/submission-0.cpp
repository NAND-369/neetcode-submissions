class Solution {
public:
    int trap(vector<int>& height) {
    int n=height.size();    
    vector<int>leftMax(n);
    vector<int>rightMax(n);
    int lmaxi=0;
    int rmaxi=0;
    for(int i=0;i<n;i++){
        lmaxi=max(lmaxi,height[i]);
        leftMax[i]=lmaxi;
    }
    for(int i=n-1;i>=0;i--){
        rmaxi=max(rmaxi,height[i]);
        rightMax[i]=rmaxi;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans+(min(leftMax[i],rightMax[i])-height[i]);
    }
    return ans;
        
    }
};