#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;;

    Node(int val){
        data=val;
        left= right = nullptr;
    }
};
Node* createNode(int val){
    return new Node(val);
}
void inorder(Node* root){
    if(root== nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main(){
    Node* root = createNode(1);
    root->left = createNode(2);
    root-> right= createNode(3);
    root->left->left= createNode(4);
    root->left->right=createNode(5);
    inorder(root);
    return 0;
}