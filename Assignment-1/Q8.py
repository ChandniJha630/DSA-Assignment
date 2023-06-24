class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        
        n=len(nums)
        s=n*(n+1)*0.5

        miss=int(s)-sum(set(nums))
        duplicate=sum(nums)-int(s)+miss

        return duplicate,miss

 
