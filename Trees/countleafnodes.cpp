//coding ninjas question
//Link - https://www.codingninjas.com/codestudio/problems/count-leaf-nodes_893055

void InOrder(BinaryTreeNode<int> *root, int &count)
{
    //cout<<"In Order: "<<endl;
    if(root==NULL){
        return;}
    InOrder(root->left,count);
    if(root->left==NULL && root->right==NULL)
    {
        count++;
    }
    InOrder(root->right,count);
}
int noOfLeafNodes(BinaryTreeNode<int> *root){
    // Write your code here.
    
    int count=0;
    InOrder(root, count);
    return count;
}