int height(struct Node* node) {
   
   if(node == NULL || (node->left == NULL && node->right == NULL)){
    return 0;
   }


   int h1 = height(node->left);
   int h2 = height(node->right);

   return (max(h1,h2) + 1);

}
