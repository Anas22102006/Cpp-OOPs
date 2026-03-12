#include <bits/stdc++.h>
using namespace std;
int main(){
    int B,T;
    cin >> B >> T;
    vector<int> v;
    for(int i=0;i<B;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int totbooks=0;
    int minutesp=0;
    for(int i:v){
        minutesp+=i;
        if(minutesp <=T){
            totbooks++;
        }
        else {
            break;
        }
    }
    cout << totbooks;
    return 0;
}