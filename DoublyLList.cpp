#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data= data;
        this->next = nullptr;
        this->prev= nullptr;
    }
};
int main(){
    Node* head = new Node(10);
    Node* sec= new Node(20);
    Node* thr = new Node(30);
    head->next = sec;
    sec->prev= head;
    sec->next = thr;
    thr->prev= sec;
    while(head!=nullptr){
        cout << head->data << " ";
        if(head->next==nullptr) break;
        else head= head->next;
    }
    cout << endl;
    while(head!=nullptr){
        cout << head->data << " ";
        head= head->prev;
    }
    return 0;
}