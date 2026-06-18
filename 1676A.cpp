#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    while(N--){
        int n;
        cin >> n;
        int l3 = (n%10) + ((n/=10)%10) +((n/=10)%10);
        int f3 = ((n/=10)%10) +((n/=10)%10) + ((n/=10)%10);
        if(l3==f3){
            cout << "YES" << endl; 
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}