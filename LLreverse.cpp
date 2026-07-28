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
    Node* prev= nullptr;
    Node* curr= head;
    while(curr!=nullptr){
        Node* next = curr->next;
        curr-> next = prev;
        prev= curr;
        curr = next;
    }
    Node* dummy = prev;
    while(dummy!= nullptr){
        cout << dummy->data ;
        if(dummy->next!=nullptr){
            cout << " -> ";
        }
        dummy = dummy->next;
    }
    return 0;
}