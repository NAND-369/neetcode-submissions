class Solution {
public:
    int maxArea(vector<int>& heights) {
    int l=0;
    int r=heights.size()-1;
    int MaxArea=0;
    while(l<r){
        int len=r-l;
        int h=min(heights[r],heights[l]);
        int area=len*h;
        MaxArea=max(area,MaxArea);
        if(heights[l]<heights[r])
            l++;
        else    
            r--;
    }
    return MaxArea;
    }
};
