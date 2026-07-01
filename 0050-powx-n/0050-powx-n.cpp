class Solution {
public:
    double myPow(double x, int n) {
        long long t=n;
        if(n<0){
            return 1.0/power(x,-t);
        }else{
            return power(x,t);

        
    }}
    double power(double x,long long n){
        if(n==0) return 1.0;
        if(n==1) return x;
        if(n&1){
            return x*power(x,n-1);

        }else{
            return power(x*x,n/2);
        }
    }
};