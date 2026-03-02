#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data): data(data),next(nullptr){}
};
int main(){
    Node* head = nullptr;
    Node* tail = nullptr;
    for(int i=0;i<5;i++){
        int x;
        cin >> x;
        Node* newNode= new Node(x);
        if(head==nullptr){
            head= newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    Node* temp=head;
    while(temp!=nullptr){
        cout << temp->data <<" ";
        temp= temp->next;
    }
    return 0;
}