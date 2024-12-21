pair<int, bool>checkfast(Node*root){
        
        if(root == NULL){
            pair<int, bool>p = make_pair(0, true);
            return p;
        }
        
        if(root->left ==  NULL && root->right == NULL){
            pair<int, bool>p = make_pair(root->data, true);
            return p;
        }
        
        pair<int, bool>left = checkfast(root->left);
        pair<int, bool>right = checkfast(root->right);
        
        bool check = root->data ==     left.first +  right.first;
        
        
        pair<int, bool>ans;
        ans.first  = left.first +  right.first + root->data;
        if(left.second && right.second && check){
            ans.second = true;    
        }
        
        else {
            ans.second = false;
        }
        
        return ans;
    }
    
    bool isSumTree(Node* root) {
        // Your c
        
        pair<int, bool>p = checkfast(root);
        return p.second;
    }
