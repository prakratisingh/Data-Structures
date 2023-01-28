#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildTree(Node* root)
{
    int data;
    cout<<"Enter data: "<<endl;
    cin>>data;
    root = new Node(data);

    if(data==-1)
    {
        return NULL;
    }

    cout<<"Enter value of left of.."<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter value of right of.."<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}

//Pre Order traversal
void PreOrder(Node* root)
{
    //cout<<"Pre Order: "<<endl;
    if(root)
    {
        cout<<root->data<<" ";
        PreOrder(root->left);
        PreOrder(root->right);
    }
    cout<<endl;
}

//In Order traversal
void InOrder(Node* root)
{
    //cout<<"In Order: "<<endl;
    if(root)
    {
        InOrder(root->left);
        cout<<root->data<<" ";
        InOrder(root->right);
    }
    cout<<endl;
}

//Post Order traversal
void PostOrder(Node* root)
{
    //cout<<"Post Order: "<<endl;
    if(root)
    {
        PostOrder(root->left);
        PostOrder(root->right);
        cout<<root->data<<" ";
    }
    cout<<endl;
}

//Level order traversing
void LevelOrderTraverse(Node* root)
{
    queue<Node> q;
    q.add(root);

    if(!root)
    return;

    q.push(root->data);
    while(!q.empty())
    {


    }
}

int main()
{
    Node* root = NULL;
    root = buildTree(root);
    PreOrder(root);
    InOrder(root);
    PostOrder(root);
    return 0;
}