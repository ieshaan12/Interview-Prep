class Solution:
    """
    Time Taken(%): 83.17
    Memory Usage(%): 100.0
    Submitted by: Caff1982
    """
    def lengthOfLastWord(self, s: str) -> int:
        try:
            return len(s.split()[-1])
        except IndexError:
            return 0