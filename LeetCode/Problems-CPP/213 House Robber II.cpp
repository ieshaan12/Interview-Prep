//Time Taken(%): 4ms
//Memory usage(%): 8.4MB
//Your Name(optional):nitinvinayak
// Your solution here
class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size(),next,secondNext,current1=0,current2=0;
        if (n==0) return 0;
        if (n==1) return nums[0];
        if (n==2) return *max_element(nums.begin(),nums.end());
        //Consider one case from 0 to n-2 and solve House Robber
        next=nums[n-2],secondNext=0;
        
        for(int i=n-3;i>=0;i--){
            current1= max(nums[i]+secondNext,next);
            secondNext=next;
            next=current1;
        }
        //consider another case from 1 to n-1 and solve House Robber
        next=nums[n-1],secondNext=0;
        for(int i=n-2;i>=1;i--){
            current2= max(nums[i]+secondNext,next);
            secondNext=next;
            next=current2;
        }
        return max(current1,current2);
    }
};