class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        if not digits:
            return [1]  # Return [1] if digits list is empty
        
        i = len(digits) - 1
        carry = 1
        
        while carry != 0 and i >= 0:  # Add a check for valid index
            if digits[i] == 9:
                digits[i] = 0
                carry = 1
            else:
                digits[i] += 1
                carry = 0
            i -= 1
        
        if carry == 1:  # If carry is still 1 after the loop, prepend 1 to the list
            digits.insert(0, 1)
        
        return digits