// Time Taken(%):8ms
// Memory usage(%):10MB
// Your Name(optional):Aditya Upadhyay
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // int max_num = 0 ;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]>0) max_num = max(max_num,nums[i]);
        // }
        // if(nums.size()==0) return 1;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) mp[nums[i]]=1;
        }
        for(int i=1;i<=2*nums.size();i++){
            if(mp.find(i)==mp.end()) return i;
        }
        return 1;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]>0) arr[nums[i]]=true;
        // }
        // for(int i=1;i<max_num+1;i++){
        //     if(arr[i]==false) return i;
        // }
        // return max_num+1;        
    }
};