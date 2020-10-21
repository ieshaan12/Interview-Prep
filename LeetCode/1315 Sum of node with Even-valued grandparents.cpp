// Time Taken(%):97.08%
// Memory usage(%):28.7MB
// Your Name(optional):Aditya Upadhyay

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int sumEvenGrandparent(TreeNode* root,bool parent=false,bool grandparent=false) {
        if (!root) return 0;
        return (grandparent ? root->val : 0) + sumEvenGrandparent(root->left, !(root->val & 1), parent) + sumEvenGrandparent(root->right, !(root->val & 1), parent);
    }
};