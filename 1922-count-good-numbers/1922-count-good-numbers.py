
class Solution:
    def countGoodNumbers(self, n: int) -> int:
        n=n-1
        m=(10 ** 9 +7)

        if n % 2==0:
            even = n//2 +1
            odd = n//2
        else:
            even=n//2+1
            odd=n//2 +1
        
        evenpow=pow(5,even,m)
        oddpow=pow(4,odd,m)

        return (evenpow * oddpow) % m
