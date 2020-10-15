class Solution:
    def findRestaurant(self, list1: List[str], list2: List[str]) -> List[str]:
        
        d2 = dict()
        
        for i in range(len(list2)):
            d2[list2[i]] = i

        minIndex = dict()
        for i in range(len(list1)):
            if list1[i] in d2:
                if i+d2[list1[i]] not in minIndex:
                    minIndex[i + d2[list1[i]]] = [i]
                else:
                    minIndex[i + d2[list1[i]]].append(i)        
        
        return [list1[i] for i in minIndex[min(minIndex.keys())]]
        
                