#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    string s;
    cin >> s;
    int A=0;
    int D=0;
    for(char ch:s){
        if(ch=='A'){
            A++;
        }
        else{
            D++;
        }
    }
    if(A>D){
        cout << "Anton";
    }
    else if(D>A){
        cout <<"Danik";
    }
    else{
        cout << "Friendship";
    }
    return 0;
}
