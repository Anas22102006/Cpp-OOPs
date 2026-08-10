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
void bfs(Node* root){
    if(root==nullptr){
        return ;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        cout << temp->data << " ";
        if(temp->left!=nullptr){
            q.push(temp->left);
        }
        if(temp->right!=nullptr){
            q.push(temp->right);
        }
    }
}
int main(){ 
    Node* root = createNode(1);
    root->left = createNode(2);
    root-> right= createNode(3);
    root->left->left= createNode(4);
    root->left->right=createNode(5);
    //inorder(root);
    inorder(root);
    cout << endl;
    bfs(root);
    return 0;
}