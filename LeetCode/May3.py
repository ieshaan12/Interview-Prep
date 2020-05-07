class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        
        ransomSet = set(ransomNote)

        for i in ransomSet:
            if ransomNote.count(i) > magazine.count(i):
                return False
        
        return True