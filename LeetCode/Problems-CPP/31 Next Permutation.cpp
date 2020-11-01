//Time Taken(%): 4ms
//Memory usage(%): 12.7MB
//Your Name(optional):nitinvinayak
// Your solution here
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size(),i,pos,j;
        
        if(n==0) return;
        for(i=n-2;i>=0 && nums[i]>=nums[i+1];i--);
        pos=i;
        if(pos>=0){
            for(i=n-1;i>=0 && nums[i]<=nums[pos];i--);
            swap(nums[pos],nums[i]);
        }
        i=pos+1,j=n-1;
        while(i<j){
            swap(nums[i],nums[j]);
            i++,j--;
        }
    }
};