class Solution {
public:
    int characterReplacement(string s, int k) {
    int l=0,r=0,maxf=0,maxLen=0;
    vector<int>hash(26,0);
    int n=s.size();
    while(r<n){
        hash[s[r]-'A']++;
        maxf=max(maxf,hash[s[r]-'A']);
        if(((r-l+1)-maxf)>k){
            hash[s[l]-'A']--;
            l++;
        }
        else{
            maxLen=max(maxLen,r-l+1);
        }
        
        r++;
    }
    return maxLen; 
    }
};
