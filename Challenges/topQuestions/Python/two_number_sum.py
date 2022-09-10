# naive O(n^2) time | O(1) space
def twoNumberSum(nums, targetSum):
	for pos in range(len(nums) - 1):
		firstNum = nums[pos]
		for chk in range(pos+1, len(nums)):
			secondNum = arr[chk]
			if firstNum + secondNum == targetSum:
				return [firstNum, secondNum]
	return []


# optimize 1
def twoNumberSum(nums, targetSum):
	numsHash = {}
	