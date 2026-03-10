#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector<int> mon={100,20,10,5,1};
    int count=0;
    while(n>0){
        for(int i:mon){
            if(i<=n){
                n-=i;
                break;
            }
        }
        count ++;
    }
    cout << count ;
    return 0;
}