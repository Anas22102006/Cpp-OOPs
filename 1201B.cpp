#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long s=0;
    long long max=0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        s+=x;
        if(x>max){
            max=x;
        }
    }
    if(s%2==0 && (2*max <= s)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}