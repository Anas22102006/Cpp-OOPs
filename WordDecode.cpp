#include <bits/stdc++.h>
using namespace std;
int main(){
    string inp;
    cin >> inp;
    string res="";
    int ones=0;
    for(char c:inp){
        if(c== '1'){
            ones++;
        }
        else{
            res+= (char)(64+ones);
            ones=0;
        }
    }
    cout << res << endl;
    return 0;
}