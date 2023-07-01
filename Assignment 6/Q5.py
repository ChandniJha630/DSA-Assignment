def minProductSum(nums1, nums2):
    nums1.sort()
    minProductSum = 0

    for i in range(len(nums1)):
        max_val = max(nums2)
        minProductSum += nums1[i] * max_val
        nums2.remove(max_val)

    return minProductSum
