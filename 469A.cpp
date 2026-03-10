#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n,0);
    for(int i=0;i<2;i++){
        int a;
        cin >> a;
        for(int j=0;j<a;j++){
            int x;
            cin >> x;
            v[x-1]++;
        }
    }
    bool con=true;
    for(int  i:v){
        if(i==0){
            con=false;
            break;
        }
    }
    if(con){
        cout << "I become the guy.";
    }
    else{
        cout<< "Oh, my keyboard!";
    }
    return 0;
}