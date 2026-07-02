class Solution {
public:
     vector<string> result;
    vector<string> generateParenthesis(int n) {
        generate("",0,0,n);
        return result;
        
    }
    void generate(string curr,int open,int close,int n){
        if(curr.size()==2*n){
            result.push_back(curr);
            return;
        }
        if(open<n)
        generate(curr+"(",open+1,close,n);
        if(close<open)
        generate(curr+ ")",open,close+1,n);

    }
};