class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result;
        vector<int> curr;
        gencom(result,curr,k,n,1);
        return result;
        
    }
    void gencom(vector<vector<int>>&result,vector<int>&curr,int len,int target,int start){
        if(target==0 && curr.size()==len){
            result.push_back(curr);
            return;
        }
        if(curr.size()>=len || target < 0 || start>9) return;
        curr.push_back(start);
        gencom(result,curr,len,target-start,start+1);
        curr.pop_back();
        gencom(result,curr,len,target,start+1);
    }
};