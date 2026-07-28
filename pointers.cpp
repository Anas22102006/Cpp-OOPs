#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        left= right = nullptr;
    }
};
void inorder(Node* root){
    if(root==nullptr) return;
    inorder(root->left);
    cout << root->data << " " ;
    inorder(root->right);
}
void preorder(Node* root){
    if(root==nullptr) return ;
    cout << root-> data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root){
    if(root==nullptr) return ;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
void levelorder(Node* root){
    if(root==nullptr) return ;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* curr = q.front();
        q.pop();
        cout << curr->data << " ";
        if(curr->left){
            q.push(curr->left);
        }
        if(curr->right){
            q.push(curr->right);
        }
    }
}
bool search(Node* root, int key){
    if(root==nullptr) return false;
    if(root->data  == key) return true;
    return search(root->left,key) || search(root->right , key);
}
int main(){
    Node* root= new Node(1);
    Node* n2= new Node(2);
    Node* n3= new Node(3);
    Node* n4= new Node(4);
    Node* n5= new Node(5);
    Node* n6= new Node(6);
    Node* n7= new Node(7);
    root->left = n2;
    root->right= n3;
    n2-> left = n4;
    n2->right= n5;
    n3-> left= n6;
    n3->right = n7;
    inorder(root);
    cout << endl;
    preorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    levelorder(root);
    cout << endl;
    cout << search(root,7) << endl;
    cout << search(root,10) << endl;
    return 0;
}