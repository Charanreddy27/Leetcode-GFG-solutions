/**********************************************************
    Following is the Binary Tree Node structure:

    class BinaryTreeNode
    {
    public:
        int data;
        BinaryTreeNode *left, *right;
        BinaryTreeNode() : data(0), left(NULL), right(NULL) {}
        BinaryTreeNode(int x) : data(x), left(NULL), right(NULL) {}
        BinaryTreeNode(int x, BinaryTreeNode *left, BinaryTreeNode *right) : data(x), left(left), right(right) {}
    };
***********************************************************/
#include<bits/stdc++.h>
void helper(BinaryTreeNode*root,int k,unordered_map<int,int>&umap,bool &ans){

    if(root==NULL)return;

    int check=k-root->data;

    if(umap.find(k-root->data)!=umap.end()){

        ans=true;

        return;

    }

    umap[root->data]=1;

    helper(root->left,k,umap,ans);

    helper(root->right,k,umap,ans);

 

}

bool pairSumBst(BinaryTreeNode *root, int k)

{

    unordered_map<int,int>umap;

    bool ans=false;

    helper(root,k,umap,ans);

    return ans;

}