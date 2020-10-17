//Time Taken(%):20 ms
//Memory usage(%):12 MB
//Your Name(optional):nitinvinayak
// Your solution here
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size(),i,res,minPrev,maxPrev,minCurr,maxCurr;
        
        maxPrev=nums[0];
        minPrev=nums[0];
        
        res=maxPrev;
        
        for(i=1;i<n;i++){
            maxCurr=max(nums[i],max(maxPrev*nums[i],minPrev*nums[i]));
            minCurr=min(nums[i],min(maxPrev*nums[i],minPrev*nums[i]));
            
            res=max(res,maxCurr);
            
            maxPrev=maxCurr;
            minPrev=minCurr;
        }
        return res;
    }
};