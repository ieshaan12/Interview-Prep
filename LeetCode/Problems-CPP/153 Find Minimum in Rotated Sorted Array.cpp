//Time Taken(%): 8ms
//Memory usage(%): 10.5MB
//Your Name(optional):nitinvinayak
// Your solution here
class Solution {
public:
    int findMin(vector<int>& nums) {
        // return *min_element(nums.begin(),nums.end());
        
          int start=0,end=nums.size()-1;
          while(start<end){
              int mid=(start+end)/2;
              if(nums[mid]<nums[end])
                  end=mid;
              else
                  start=mid+1;
          }
          return nums[end];
    }
};