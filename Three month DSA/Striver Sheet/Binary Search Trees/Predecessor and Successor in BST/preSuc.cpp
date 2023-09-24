int minimum(TreeNode *root)
{
    int minimum = INT_MAX;
    while(root != NULL)
    {
        minimum = root -> data;
        root = root -> left;
    }
    return minimum;
}   
int maximum(TreeNode *root)
{
    int maximum = INT_MIN;
    while(root != NULL)
    {
        maximum = root -> data;
        root = root -> left;
    }
    return maximum;
} 
pair<int, int> predecessorSuccessor(TreeNode *root, int key)
{
    // Write your code here.
    TreeNode * temp = root;
    int predecessor = -1;
    int successor = -1;
    while(temp && temp -> data != key)
    {
        if(temp -> data > key)
        {
            successor = temp -> data;
            temp = temp -> left;
        }
        else
        {
            predecessor = temp -> data;
            temp = temp -> right;   
        }
    }
    if(temp && temp -> left)
        predecessor = maximum(temp -> left);
    if(temp && temp -> right)
        successor = minimum(temp -> right);
    pair<int, int> ans = make_pair(predecessor, successor);
    return ans;
}