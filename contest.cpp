#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        int n;
        cin >> n;
        vector<int> v(10,0);
        for(int j=0;j<(n*n);j++){
            int x;
            cin>>x;
            v[x]++;
        }
        bool con=true;
        for(int i:v){
            if(i>(n*(n-1))){
                con=false;
                break;
            }
        }
        if(con){cout << "Yes\n";}
        else{cout << "No\n";}
    }
    return 0;
}