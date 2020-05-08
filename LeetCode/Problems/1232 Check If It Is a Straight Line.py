class Solution:
    def checkStraightLine(self, coordinates: List[List[int]]) -> bool:
        
        x1,y1 = tuple(coordinates[0])
        x2,y2 = tuple(coordinates[1])
        if x1!=x2:
            slope = (y2-y1)/(x2-x1)
            for i in range(2,len(coordinates)):
                x,y = tuple(coordinates[i])
                if slope!=((y-y1)/(x-x1)):
                    return False
        else:
            for i in range(2,len(coordinates)):
                x,y = tuple(coordinates[i])
                if x!=x1:
                    return False
            
        
        return True