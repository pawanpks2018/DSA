class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> curr;
        genpart(0,result,curr,s);
        return result; 
        
    }
    void genpart(int index,vector<vector<string>>&result,vector<string>&curr,string &s){
        if(index==s.size()){
            result.push_back(curr);
            return;
        }

        for(int i=index;i<s.size();i++){
            if(isPalindrome(s,index,i)){
                curr.push_back(s.substr(index,i-index+1));
                genpart(i+1,result,curr,s);
                curr.pop_back();

            }
        }
    }
    bool isPalindrome(string &s,int l,int r){
        while(l<=r){
            if(s[l] != s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};