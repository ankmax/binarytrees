// Function to return the diameter of a Binary Tree.
    pair<int,int> fastdiamter(Node *root){

    if(root == NULL ){
        std::pair<int, int >p = make_pair(0,0);
        return p;
    }


    pair<int, int >left = fastdiamter(root->left);
    pair<int, int >right = fastdiamter(root->right);

    int op1 = left.first;
    int op2 = right.first;
    int h1 = left.second;
    int h2 = right.second;
    int op3 = h1 + h2;

    int res = max(max(op1, op2), op3);

    std::pair<int, int > ans;
    ans.first  = res;
    ans.second = max(h1, h2) + 1;

    return ans;

}



int diameter(Node* root) {
        // Your code here
    std::pair<int,int >p = fastdiamter(root);
    return p.first;
}
