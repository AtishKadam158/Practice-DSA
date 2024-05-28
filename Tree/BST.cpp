#include<bits/stdc++.h>
using namespace std;

typedef struct TreeNode{
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(): val(0),left(nullptr),right(nullptr){}
  TreeNode(int x): val(x),left(nullptr),right(nullptr){}
  TreeNode(int x,TreeNode* left,TreeNode* right): val(0),left(left),right(right){}
}TreeNode;

void printarray(const vector<int>&arr){
    for(const auto &itr : arr){
        cout<<itr<<" ";
    }
    cout<<"\n";
}

void inorder(TreeNode* root){
    if(!root)return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

void preorder(TreeNode* root){
    if(!root)return;
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(TreeNode* root){
    if(!root)return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
}

void levelorder(TreeNode* root){
    queue<TreeNode*>q;
    q.push(root);
    cout<<"\nThe levelorder traversal of Tree \n";
    while(!q.empty()){
        TreeNode* temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left)q.push(temp->left);
        if(temp->right)q.push(temp->right);
    }
}

int height(TreeNode* root){
    if(!root)return 0;
    return 1+max(height(root->left),height(root->right));
}

void insert(TreeNode* root,int num){
    TreeNode* temp=new TreeNode(num);
    while(true){
        if(root->val>num){
            if(!root->left){
                root->left=temp;
                break;
            }
            root=root->left;
        }
        else{
            if(!root->right){
                root->right=temp;
                break;
            }
            root=root->right;
        }
    }
}

TreeNode* create_bst(vector<int>arr){
    TreeNode* root=new TreeNode(arr[0]);
    int n=arr.size();
    for(int i=1;i<n;i++){
        insert(root,arr[i]);
    }
    cout<<"Tree Created";
    return root;
}

int main(){
    vector<int>arr={12,43,2,76,77,34,5,7,8,23,0};
    cout<<"Provided array - \n";
    printarray(arr);
    cout<<"Creating Tree using Binary Search Tree  \n";
    TreeNode* root;
    root=create_bst(arr);
    cout<<"\nInorder Traversal   \n";
    inorder(root);
    cout<<"\nPreorder Traversal   \n";
    preorder(root);
    cout<<"\nPostorder Traversal   \n";
    postorder(root);
    levelorder(root);
    cout<<"\nHeight of tree is \n"<<height(root);
}