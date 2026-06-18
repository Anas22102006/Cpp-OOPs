#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector<int> v(10,0);
    while(n>0){
        v[(n%10)]++;
        n/=10;
    }
    int lucky= v[4]+ v[7];
    if(lucky==4 || lucky==7){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}