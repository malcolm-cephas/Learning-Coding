class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        length = len(nums)
        current = nums[0]
        k = 1

        for i in range(1, length):
            if current == nums[i]:
                continue
            else:
                current = nums[i]
                k += 1
                nums[k - 1] = nums[i]

        return k