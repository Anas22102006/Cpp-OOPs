#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next= nullptr;
    }
    Node(){
        this->data =0;
        this->next=nullptr;
    }
};

int main(){
    vector<Node*> nv(10);
    nv[0] = new Node(1);
    Node* temp = nv[0];
    for(int i=1;i<10;i++){
        nv[i] = new Node(i+1);
        temp->next = nv[i];
        temp  = nv[i];
    }
    nv[9]->next = nv[0];
    int a= 25;
    while(nv[0] != nullptr && a--){
        cout << nv[0]->data << " ";
        nv[0]= nv[0]->next;
    }
    return 0;
}