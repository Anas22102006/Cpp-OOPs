#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    bool con=false;
    for(char ch:s){
        if(ch=='H' || ch=='Q' || ch=='9'){
            con=true;
            break;
        }
    }
    if(con){
        cout << "YES";
    }
    else{
        cout <<"NO";
    }
    return 0;
}