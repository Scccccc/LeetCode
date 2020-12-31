class Solution(object):
    def maxArea(self, s):
        l = 0
        r = len(s) - 1
        if not s or len(s) == 1:
            return 0
        res = (r - l) * (s[l] if s[l] < s[r] else s[r])

        while l < r:
            if s[l] < s[r]:
                res = res if res > s[l] * (r - l) else s[l] * (r - l)
                l += 1
            else:
                res = res if res > s[r] * (r - l) else s[r] * (r - l)
                r -= 1
        return res
