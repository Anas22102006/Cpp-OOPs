#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=nullptr;
    }
};
int main(){
    int n;
    cin >> n;
    Node* head= nullptr;
    Node* tail= nullptr;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        Node* temp = new Node(x);
        if(head==nullptr){
            head= temp;
            tail=temp;
        }
        else{
            tail->next = temp;
            tail=temp;
        }
    }
    Node* dummy= head;
    while(dummy!=nullptr){
        Node* temp= dummy;
        int val= dummy->data;
        while(temp->next->next!=nullptr){
            if(val==temp->data){
                temp= temp->next-> next;
            }
            else{
                temp= temp->next;
            }
        }
        dummy=dummy->next;
    }
    Node* dummy2=head;
    while(dummy2!= nullptr){
        cout << dummy2->data;
        if(dummy2->next!=nullptr){
            cout << " -> ";
        }
        dummy2=dummy2->next;
    }
    return 0;
}