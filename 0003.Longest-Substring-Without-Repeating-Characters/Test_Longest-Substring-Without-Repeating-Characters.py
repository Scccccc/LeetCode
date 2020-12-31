import unittest
class Solution(object):
    def lengthOfLongestSubstring(self, s):
        result=0
        temp=''
        for item in s:
            if item not in temp:
                temp += item
            else:
                if len(temp)>result:
                    result=len(temp)
                temp = temp[temp.index(item) + 1:]
                temp += item
        return max(len(temp),result)
class MaxAreaTest(unittest.TestCase):
    def test_lengthOfLongestSubstring(self):
        #The first test
        res1 = Solution.lengthOfLongestSubstring("abcabcbb")
        # The Second test
        res2 = Solution.lengthOfLongestSubstring("bbbbb")
        #The third test
        res3 = Solution.lengthOfLongestSubstring("pwwkew")
        self.assertEqual(res1,3)
        self.assertEqual(res2, 1)
        self.assertEqual(res3, 3)
unittest.main()
