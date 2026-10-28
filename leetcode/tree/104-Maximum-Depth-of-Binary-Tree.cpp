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
    //int depth = 1;
    int getDepth(TreeNode* root,int count = 0){
        if(root == nullptr){
            return count;
        }
        return max(getDepth(root->left,count+1), getDepth(root->right,count+1) );
        
    }

    int maxDepth(TreeNode* root) {
        return getDepth(root);
    }
};