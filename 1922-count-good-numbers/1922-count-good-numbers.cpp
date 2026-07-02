class Solution {
    const int mode=1e9+7;
    long long power(int a,long long b){
        if(b==0) return 1;

        long long half=power(a,b/2);

        long long result=(half *half )% mode;

        if(b&1){

             result= ( (result*a) %mode);
        }
        return result;
    }
public:
    int countGoodNumbers(long long n) {
        return (power(4,n/2) *power(5,(n+1)/2) % mode);
        
    }
};