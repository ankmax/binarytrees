// Function to check whether a binary tree is balanced or not.
    pair<int, bool>fastcheck(Node *root){

    if(root == NULL){
        pair<int, bool> p = make_pair(0, true);
        return p;
    }


    pair<int, bool> left = fastcheck(root->left);
    pair<int, bool> right = fastcheck(root->right);

    int h1 = left.first;
    int h2 = right.first;
    int res_height = max(h2,h1) + 1;
    bool diff = abs( h2 -h1) <= 1;

     pair<int, bool> ans;
     ans.first = res_height;

     if(left.second && right.second && diff){
        ans.second = true;
     }

     else {
        ans.second = false;
     }

     return ans;

}

bool isBalanced(Node* root) {
        pair<int, bool> c = fastcheck(root);
        return c.second;
}
