// Time Taken(%):104ms 
// Memory usage(%):44.4MB
// Your Name(optional):Aditya Upadhyay

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* solve(vector<int>&nums,int lo,int hi){
        if(lo>hi) return NULL;
        int root=lo;
        int max_num=0;
        for(int i=lo;i<=hi;i++){
            if(nums[i]>max_num){
                max_num=nums[i];
                root=i;
            }
        }
        TreeNode* root_node = new TreeNode(nums[root]);
        root_node->left = solve(nums,lo,root-1);
        root_node->right = solve(nums,root+1,hi);
        return root_node;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return solve(nums,0,nums.size()-1);
    }
};