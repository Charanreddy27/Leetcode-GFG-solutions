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
    TreeNode* pre(vector<int> &preorder,int &i,int bound){
        if(preorder.size()==i or preorder[i]>bound) return NULL;
        TreeNode* root = new TreeNode(preorder[i++]);
        root->left = pre(preorder,i,root->val);
        root->right = pre(preorder,i,bound);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        return pre(preorder,i,INT_MAX);
    }
};