class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
    unordered_map<int,int>st;
    for(int i=0;i<numbers.size();i++){
        int complement=target-numbers[i];
        if(st.find(complement)!=st.end()){
            return {st[complement],i+1};
        }

        st[numbers[i]]=i+1;
    }
    return{};
    }
};
