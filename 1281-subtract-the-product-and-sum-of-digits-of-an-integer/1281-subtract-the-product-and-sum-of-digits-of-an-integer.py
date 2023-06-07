class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        Sum=0
        Prod=1
        while n!=0:
            rem=n%10
            print(rem)
            Sum+=rem
            Prod*=rem
            n//=10
        return Prod-Sum   