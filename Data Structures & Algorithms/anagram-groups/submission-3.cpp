class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string,vector<string>>ans;
    for(string s:strs){
        string sorted=s;
        sort(sorted.begin(),sorted.end());
        ans[sorted].push_back(s);
    }
    vector<vector<string>>result;
    for(auto&it:ans){
       result.push_back(it.second);
    }
    return result;
    }
};
