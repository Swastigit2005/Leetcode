class Solution(object):
    def singleNumber(self, nums):
     res=0 
     for n in nums:
          res= res ^ n
     return res
        