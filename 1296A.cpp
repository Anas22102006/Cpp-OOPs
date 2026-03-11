#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        int n;
        cin>>n;
        int odd=0;
        int eve=0;
        for(int j=0;j<n;j++){
            int x;
            cin>> x;
            if(x%2==0){
                eve++;
            }
            else{
                odd++;
            }
        }
        if(odd!=0 && (eve!=0 || odd%2!=0)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}