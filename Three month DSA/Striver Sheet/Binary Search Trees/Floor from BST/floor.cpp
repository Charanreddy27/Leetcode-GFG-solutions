int Floor(BinaryTreeNode<int> *root, int input)
{
		/*Write your code here. 
	 *Don't write main().
	 *Don't take input, it is passed as function argument.
	 *Don't print output.
	 *Taking input and printing output is handled automatically.
	*/ 
	int floor = -1;
	while(root){
		if(input == root->data){
			return root->data;
		}
		if(input<root->data){
			root = root->left;
		}
		else{
			floor = root->data;
			root = root->right;
		}
	}
	return floor;
}
