class Solution {
public:
    bool isPalindrome(string s) {
    string temp;
    for(int i=0;i<s.size();i++){
        if(isalnum(s[i]))
           temp.push_back(tolower(s[i]));
    }
    int p1=0,p2=temp.size()-1;
    while(p1<=p2){
        if(temp[p1]!=temp[p2]) return false;
        p1++;
        p2--;
    }   
    return true;
    }
};
