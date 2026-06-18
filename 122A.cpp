#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> luck ={4,7,44,47,74,77,444,447,474,477,777};
    for(int x: luck){
        if(n%x==0){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}