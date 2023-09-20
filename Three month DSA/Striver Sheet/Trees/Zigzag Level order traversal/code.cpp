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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL) return ans;
        stack<TreeNode*> s1;
        stack<TreeNode*> s2;
        s1.push(root);
        while(!s1.empty() or !s2.empty()){
            vector<int> zigzag;
            while(!s1.empty()){
                TreeNode* node = s1.top();
                s1.pop();
                if(node->left) s2.push(node->left);
                if(node->right) s2.push(node->right);
                zigzag.push_back(node->val);
                
            }
            if(zigzag.size()>0){
                ans.push_back(zigzag);
            }
            zigzag.clear();
            while(!s2.empty()){
                TreeNode* node = s2.top();
                s2.pop();
                if(node->right) s1.push(node->right);
                if(node->left) s1.push(node->left);
                
                zigzag.push_back(node->val);
            }
            if(zigzag.size()>0){
                ans.push_back(zigzag);
                
            }
            zigzag.clear();
        }
        return ans;
    }
};