#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin >> n >> x;
    vector<int> vec;
    for(int i=1;i<=n;i++){
        if(x%i==0){
            vec.push_back(i);
        }
    }
    int tot= 0;
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec.size();j++){
            if(vec[i]*vec[j]==x){
                tot++;
            }
        }
    }
    cout << tot << endl;
    return 0;
}