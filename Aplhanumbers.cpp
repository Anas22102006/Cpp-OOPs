#include <bits/stdc++.h>
using namespace std;
int main(){
    string inp1;
    int inp2;
    cin >> inp1 >> inp2;
    string alphas="";
    int nums=0;
    for(char c:inp1){
        if(isalpha(c)){
            alphas+=c;
        }
        else{
            nums+=(c-'0');
        }
    }
    if(inp1==""){
        cout << "NULL" << endl;
    }
    else if(inp2==0 && nums!=0){
        cout << nums << endl;
    }
    else if(inp2==1 && alphas != ""){
        cout << alphas << endl;
    }
    else{
        cout << "ZERO" << endl;
    }
    
    return 0;
}