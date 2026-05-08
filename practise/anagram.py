class Solution(object):
    def __init__(self, strs):
        self.strs = strs
        self.ana = []

    def groupAnagrams(self):
        for x in self.strs:
            for y in x:
                print()


soln = Solution(["eat", "tea", "tan", "ate", "nat", "bat"])
soln.groupAnagrams()
