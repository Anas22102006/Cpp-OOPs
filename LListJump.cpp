#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
    Node(){
        data=0;
        next=nullptr;
    }
};
int main(){
    int n,k;
    cin >> k;
    cin >> n;
    Node* inp= nullptr;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        Node* curr= new Node(x);
        curr->next=inp;
        inp=curr;
    }
    Node* a= new Node();
    Node* adummy= a;
    Node* b= new Node();
    Node* bdummy= b;
    int pos=1;
    k= n-k+1;
    while(inp!=nullptr){
        Node* temp= new Node(inp->data);
        if(pos<k){
            adummy->next=temp;
            adummy=temp;
        }
        else{
            bdummy->next=temp;
            bdummy=temp;
        }
        pos++;
        inp=inp->next;
    }
    bdummy->next=a->next;
    Node* res= b->next;
    while(res!=nullptr){
        cout << res->data << " ";
        res=res->next;
    }
    return 0;
}

