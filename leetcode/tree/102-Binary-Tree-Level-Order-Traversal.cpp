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
    queue<TreeNode*> q; 
    vector<vector<int>> res;

    void solve(TreeNode* root){
       if(!root)    return;
       q.push(root);
       int depth = 0;
       int level = 1;
       while(!q.empty()){
        res.push_back(vector<int>());
        level = q.size();
        
        for(int i=0; i < level; i++){
            if(q.front()->left){
                q.push(q.front()->left);
                
            }
            
            if(q.front()->right){
                q.push(q.front()->right);
        
            }
            res[depth].push_back(q.front()->val);
            q.pop();
            
        }
        depth++;

       }

    }
    vector<vector<int>> levelOrder(TreeNode* root) {
       
        solve(root);
        return res;
    }
};