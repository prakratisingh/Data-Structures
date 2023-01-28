//Coding ninjas question
//Link - https://www.codingninjas.com/codestudio/problems/tree-height_4609628

int Depth(TreeNode<int> *root)
{
     // Write your code here.
    if(root==NULL)
    {
        return 0;
    }
    int left = Depth(root->left);
    int right = Depth(root->right);
    
    int ans = max(left,right)+1;
    
    return ans;
}


int maxDepth(TreeNode<int> *root) {
   return Depth(root)-1;
}