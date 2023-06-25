class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
       zero_pointer=0
       for nonzero_pointer in range(0,len(nums)):
            
            if nums[zero_pointer]==0 and nums[nonzero_pointer]!=0:
               temp=nums[zero_pointer]
               nums[zero_pointer]=nums[nonzero_pointer]
               nums[nonzero_pointer]=temp
            if nums[zero_pointer]!=0:
                zero_pointer+=1