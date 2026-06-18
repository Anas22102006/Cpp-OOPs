#include <bits/stdc++.h>
using namespace std;
int main(){
    string inp1,inp2,inp3;
    cin >> inp1 >> inp2 >> inp3 ;
    int inp4;
    cin >> inp4;
    int oddpos = (inp1[0]-'0') + (inp1[2]-'0') + (inp2[0]-'0') + (inp2[2]-'0') + (inp3[0]-'0') + (inp3[2]-'0');
    int evenpos = (inp1[1]-'0') + (inp1[3]-'0') + (inp2[1]-'0') + (inp2[3]-'0') + (inp3[1]-'0') + (inp3[3]-'0');
    if(inp4&(inp4-1)){cout << evenpos-oddpos << endl;}
    else{cout << oddpos-evenpos << endl ;}
    return 0;
}