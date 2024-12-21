vector <int> zigZagTraversal(Node* root)
    {
        vector<int>ans;
    	if (root == NULL){
    	    return ans;
    	}
    	
    	
    	queue<Node *>q;
    	q.push(root);
    	bool  nodr = true;
    	while(!q.empty()){
    	    
    	    int size = q.size();
    	  vector<int>h(size);
    	    for(int i = 0; i < size; i++){
    	        
    	       struct Node * front = q.front();
    	       q.pop();
    	        int index  = nodr ? i : size - i -1;
    	        //ans.push_back() = front->data;
    	        h[index] = front->data;
    	        
    	        
    	        if(front->left){
    	            q.push(front->left);
    	        }
    	        
    	        
    	        if(front->right){
    	            q.push(front->right);
    	        }
    	        
    	    }
    	    
    	    nodr = !nodr;
    	    
    	    for (auto x : h){
    	        ans.push_back(x);
    	    }
    	}
    	return ans;
    	
    }
