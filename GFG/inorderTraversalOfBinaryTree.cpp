class Solution {
public:
    vector<int> inOrder(Node* root)
    {
        stack<Node*> st;
        Node* t = root;
        vector<int> v;
        while(!st.empty() || t!=NULL){
            if(t!=NULL){
                st.push(t);
                t=t->left;
            }
            else{
                t = st.top();
                v.push_back(t->data);
                st.pop();
                t=t->right;
            }
        }
        return v;
    }
};