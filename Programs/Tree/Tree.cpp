#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  struct Node *left, *right;
  Node(int k){
    data = k;
    left = right = NULL;
  }
};

void Preorder(Node *root){
  if(root != NULL){
    cout << (*root).data << " ";
    Preorder((*root).left);
    Preorder((*root).right);
  }
}

void Inorder(Node *root){
  if(root != NULL){
    Inorder(root->left);
    cout << (*root).data << " ";
    Inorder(root->right);
  }
}

void Postorder(Node *root){
  if(root != NULL){
    Postorder(root->left);
    Postorder(root->right);
    cout << root->data << " ";
  }
}

void LevelOrder(Node *root, int level){
  if(root != NULL){
    if(level == 1){
      cout << (*root).data << " ";
    }
    else{
      LevelOrder(root->left, level-1);
      LevelOrder(root->right, level-1);
    }
  }
}

int main(){
  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);

  //Preorder(root);
  //Postorder(root);
  //Inorder(root);
  LevelOrder(root, level);

  return 0;
}