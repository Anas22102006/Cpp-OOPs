#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        next = nullptr;
    }
};
int main(){
    int N;
    cin >> N;
    Node* head= nullptr;
    Node* tail = nullptr;
    for(int i=0;i<N;i++){
        int x;
        cin >> x;
        Node* temp= new Node(x);
        if(head==nullptr){
            head= temp;
            tail=temp;
        }
        else{
            tail->next = temp;
            tail=temp;
        }
    }
    int pos,val;
    cin >> pos >> val;
    int poi=0;
    Node* dummy= head;
    while(dummy!=nullptr){
        if(poi==(pos-2)){
            Node* nxt= dummy->next;
            Node* ins= new Node(val);
            dummy->next = ins;
            ins->next = nxt;
        }
        poi++;
        dummy=dummy->next;
    }
    Node* dummy2= head;
    while(dummy2!=nullptr){
        cout << dummy2->data;
        if(dummy2->next != nullptr){
            cout << " -> ";
        }
        dummy2=dummy2->next;
    }
    return 0;
}