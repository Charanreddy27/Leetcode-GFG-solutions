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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>> m;
        queue<pair<TreeNode* ,pair<int,int>>> q;
        q.push({root,{0,0}});
        while(!q.empty()){
            auto i = q.front();
            q.pop();
            TreeNode* node = i.first;
            int x = i.second.first;
            int y = i.second.second;
            m[x][y].insert(node->val);
            if(node->left){
                q.push({node->left,{x-1,y+1}});
            }
            if(node->right){
                q.push({node->right,{x+1,y+1}});
            }
        }
        vector<vector<int>> v;
        for(auto p:m){
            vector<int> c;
            for(auto q :p.second){
                c.insert(c.end(),q.second.begin(),q.second.end());
            }
            v.push_back(c);
        }
        return v;
    }
};