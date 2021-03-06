class Solution(object):
    def createSortedArray(self, instructions):
        """
        :type instructions: List[int]
        :rtype: int
        """
        answer = 0
        from sortedcontainers import SortedList
        instructionsSorted = SortedList()
        for instruction in instructions:
            left = instructionsSorted.bisect_left(instruction)
            right = len(instructionsSorted) - instructionsSorted.bisect(instruction)
            answer += left if left < right else right
            instructionsSorted.add(instruction)
        return answer % (10**9 + 7)