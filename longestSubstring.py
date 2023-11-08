class Solution(object):
    def lengthOfLongestSubstring(self, s):
        if len(s) == 0:
            return 0
        if len(s) == 1:
            return 1
        r = 0
        for i in range(len(s)):
            for j in range(i+1, len(s)):
                if s[j] in s[i:j]:
                    if r < j - i:
                        r = j - i
                    break
                if j == len(s) - 1:
                    if r < j - i + 1:
                        r = j - i + 1
        return r
        

