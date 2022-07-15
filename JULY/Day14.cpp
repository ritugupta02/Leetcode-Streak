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
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder,int start1,int start2,int end) {
        if(start2>end || start1>preorder.size()-1){
            return NULL;
        }
        
        TreeNode *p=new TreeNode;
        p->val=preorder[start1];
        
        int index=0;
        for(int i=start2;i<=end;i++){
            if(p->val==inorder[i]){
                index=i;
                break;
            }
        }
        
        p->left=helper(preorder,inorder,start1+1,start2,index-1);
        p->right=helper(preorder,inorder,start1+index-start2+1,index+1,end);
        
        return p;
        
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return helper(preorder,inorder,0,0,inorder.size()-1);
    }
};

//https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/
