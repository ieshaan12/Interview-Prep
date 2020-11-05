//Time Taken(%): 12ms
//Memory usage(%): 7.8MB
//Your Name(optional):nitinvinayak
// Your solution here
class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n=nums.size(),res;
        vector<int> lastIncrease(n,0);
        vector<int> lastDecrease(n,0);
        if (n==0) return 0;
        lastIncrease[0]=lastDecrease[0]=res=1;
        
        for(int i=1;i<n;i++ ){
            //No predecessor 
            lastIncrease[i]=lastDecrease[i]=1;
            
            //Predecessor found
            for(int j=i-1;j>=0;j--){
                if(nums[i]>nums[j]){
                    lastIncrease[i]=max(lastIncrease[i],lastDecrease[j]+1);
                }
                else if (nums[i]<nums[j]){
                    lastDecrease[i]=max(lastDecrease[i],lastIncrease[j]+1);
                }
                }
            res=max(res,max(lastIncrease[i],lastDecrease[i]));
            }
        return res;
        }
};