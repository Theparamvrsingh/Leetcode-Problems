TreeNode* findLCA(TreeNode* root, TreeNode*n1, TreeNode* n2){
    if(root == NULL) return NULL;
    if(root == n1 || root == n2) return root;
    TreeNode* leftAns = findLCA(root->left, n1, n2);
    TreeNode* rightAns = findLCA(root->right, n1, n2);
    if(leftAns && rightAns) return root;
    return(leftAns != NULL) ? leftAns : rightAns;
}
