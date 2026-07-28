#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<int> v(N);
    for(int i=0;i<N;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    if(N%2==0){
        double d= (v[N/2]+ v[(N/2)-1])/2; 
        cout << d ;
    }
    else{
        cout << v[N/2] ;
    }
    return 0;
}