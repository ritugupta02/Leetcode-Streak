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
    
    vector<int> rightSideView(TreeNode* root) {
       if(root==NULL){
            return {};
        }
        vector<int>ans;
        queue<TreeNode *>q;
        q.push(root);
             
        while(!q.empty())
        {
            int n = q.size();
            for(int i = 0; i < n; i++){
                TreeNode* node_ele = q.front();
                q.pop();
                if(i == n-1) ans.push_back(node_ele->val);
                if(node_ele->left) q.push(node_ele->left);
                if(node_ele->right) q.push(node_ele->right);
            }
        }
        return ans;
       
    }
};

//https://leetcode.com/problems/binary-tree-right-side-view/     bfs
