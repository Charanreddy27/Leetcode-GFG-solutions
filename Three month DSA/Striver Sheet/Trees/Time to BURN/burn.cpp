/************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) 
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include<bits/stdc++.h>
BinaryTreeNode<int>* parentSol(BinaryTreeNode<int> *root,unordered_map<BinaryTreeNode<int>*,BinaryTreeNode<int>*> &parent,int start ){
    BinaryTreeNode<int>* res;
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty()){
        BinaryTreeNode<int>* curr = q.front();
        
        if(curr->data==start) res = curr;
        q.pop();
        if(curr->left){
            q.push(curr->left);
            parent[curr->left] = curr;
        }
        if(curr->right){
            q.push(curr->right);
            parent[curr->right]= curr;
        }
    }
    return res;
}
int timeToBurnTree(BinaryTreeNode<int>* root, int start)
{
    // Write your code here
    unordered_map<BinaryTreeNode<int>*,BinaryTreeNode<int>*> parent;
    BinaryTreeNode<int>* target =parentSol(root,parent,start);
    unordered_map<BinaryTreeNode<int>*,bool> visited;
    visited[target] = true;
    queue<BinaryTreeNode<int>*> q;
    q.push(target);
    int time=0;
    while(!q.empty()){
        int n = q.size();
        int flag =0;
        for(int i=0;i<n;i++){
            BinaryTreeNode<int>* current = q.front();
            q.pop();
            if(current->left and !visited[current->left]){
                q.push(current->left);
                visited[current->left]= true;
                flag =1;
            }
            if(current->right and !visited[current->right]){
                q.push(current->right);
                visited[current->right]= true;
                flag =1;
            }
            if(parent[current] and !visited[parent[current]]){
                q.push(parent[current]);
                visited[parent[current]]=true;
                flag =1;
            }


        }
        if(flag) time++;
    }
    return time;
}
