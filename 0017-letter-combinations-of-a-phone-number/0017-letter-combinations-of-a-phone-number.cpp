class Solution {
public:
    vector<string> result;
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string> mapi;
        mapi['2']="abc";
        mapi['3']="def";
        mapi['4']="ghi";
        mapi['5']="jkl";
        mapi['6']="mno";
        mapi['7']="pqrs";
        mapi['8']="tuv";
        mapi['9']="wxyz";
        string temp="";
        solve(0,digits,temp,mapi);
        
        return result;
    }
    void solve(int index,string &digits,string &temp,unordered_map<char,string>&mapi){

        if(index==digits.size()){
            result.push_back(temp);
            return;
        }
        if(index>=digits.size()) return;
         char ch=digits[index];
         string s=mapi[ch];
         for(int i=0;i<s.size();i++){
            temp.push_back(s[i]);
            solve(index+1,digits,temp,mapi);
            temp.pop_back();

         }




    }
};