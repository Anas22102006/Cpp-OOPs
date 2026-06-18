#include <bits/stdc++.h>
using namespace std;
vector<int> nextSmallRepl(vector<int> v){
    vector<int> res;
    for(int i=0;i<v.size();i++){
        int nxtmin=-1;
        for(int j=i;j<v.size();j++){
            if(v[j]<v[i]){
                nxtmin=v[j];
                break;
            }
        }
        res.push_back(nxtmin);
    }
    return res;
}
int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin >> vec[i];
    }
    vector<int> replaced= nextSmallRepl(vec);
    for(int x:replaced){
        cout << x << " ";
    }
    return 0;
}