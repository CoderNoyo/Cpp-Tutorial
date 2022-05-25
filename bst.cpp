#include<bits/stdc++.h>
using namespace std;

int getorder(Node* root){
  if(root==NULL)
  return 0;

  printPreorder(root->left);
  printPreorder(root->right);
  cout<<root->data<<" ";

  cout<<root->data<<" ";
  printPostporder(root->right);
  printPostporder(root->left);
  

  printInorder(root->left);
  cout<<root->data<<" ";
  printInorder(root->right);






}
