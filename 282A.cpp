#include <bits/stdc++.h>
using namespace std;
void eval(int &x, string s){
    if(s=="X++"){
        x++;
    }
    else if(s=="++X"){
        ++x;
    }
    else if(s=="--X"){
        --x;
    }
    else{
        x--;
    }
}
int main(){
    int res=0;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string st;
        cin >> st;
        eval(res,st);
    }
    cout << res << endl;
    return 0;
}