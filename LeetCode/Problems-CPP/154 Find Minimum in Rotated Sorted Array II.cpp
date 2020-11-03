//Time Taken(%): 8ms
//Memory usage(%): 12.6MB
//Your Name(optional):nitinvinayak
// Your solution here
class Solution {
public:
    int findMin(vector<int>& nums) {
        // return *min_element(nums.begin(),nums.end());
          // set<int> num(nums.begin(),nums.end());
          // return *num.begin();
         int min=nums[0];
        for(int i=1; i<nums.size();i++){
            if (min>nums[i])
                return nums[i];
        }
        return min;
    }
};