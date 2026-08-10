#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val= val;
        left = right = nullptr;
    }
};
void inorder(Node* root){
    if(root==nullptr){
        return;
    }
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}
void preorder(Node* root){
    if(root==nullptr){
        return;
    }
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root){
    if(root==nullptr){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->val<< " ";

}
void levelorder(Node* root){
    if(root==nullptr){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp= q.front();
        q.pop();
        cout << temp-> val<< " ";
        if(temp->left!=nullptr){
            q.push(temp->left);
        }
        if(temp->right!=nullptr){
            q.push(temp->right);
        }
    }
}
static int ind=-1;
Node* buildpre(vector<int> seq){        //O(n)
    ind++;
    if(seq[ind]== -1){
        return nullptr;
    }
    Node* root= new Node(seq[ind]);
    root->left = buildpre(seq);  
    root-> right = buildpre(seq);
    return root;


}
int height(Node* root){
    if(root==nullptr){
        return 0;
    }
    return 1+ max(height(root->left),height(root->right));
}
int main(){
    vector<int> vec = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root= buildpre(vec);
    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    levelorder(root);
    cout << endl << height(root) ;
    return 0;
}