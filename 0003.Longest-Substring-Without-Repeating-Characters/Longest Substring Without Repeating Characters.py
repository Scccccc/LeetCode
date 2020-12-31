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
