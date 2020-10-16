class Solution:
    """
    Time Taken(%): 91.03
    Memory Usage(%): 17.17
    Submitted by: Caff1982
    """
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        return [i for (i, v) in Counter(nums).most_common(k)]