class Solution:
    """
    Time Taken(%): 95.00
    Memory Usage(%): 5.18
    Submitted by: Caff1982
    """
    def combine(self, n: int, k: int) -> List[List[int]]:
        return list(combinations(range(1, n+1), k))
        