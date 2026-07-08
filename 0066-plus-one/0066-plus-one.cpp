class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits[digits.size()-1]<9){
            digits[digits.size()-1]++;
            return digits;
        }
        else{
            reverse(digits.begin(),digits.end());
            digits[0]++;
            int temp=0;
            for(int i=0;i<digits.size();i++){
                int val=digits[i]+temp;
                digits[i]=val%10;
                temp=val/10;


            }
            if (temp>0)
            digits.push_back(temp);
            reverse(digits.begin(),digits.end());
            return digits;
        }


        
        
       
    }
};