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
    TreeNode* calc(vector<int> &inorder,int inStart,int inEnd,vector<int> &postorder,int postStart,int postEnd,map<int,int> &m){
        if(inStart>inEnd || postStart>postEnd){
            return NULL;
        }
        TreeNode* root = new TreeNode(postorder[postEnd]);
        int inRoot = m[root->val];
        int left = inRoot - inStart;
        root->left = calc(inorder,inStart,inRoot-1,postorder,postStart,postStart+left-1,m);
        root->right = calc(inorder,inRoot+1,inEnd,postorder,postStart+left,postEnd-1,m);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int,int> m;
        for(int i=0;i<inorder.size();i++){
            m[inorder[i]]=i;
        }
        TreeNode* root = calc(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,m);
        return root;
    }
};