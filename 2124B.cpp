#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        int n;
        cin >> n;
        int sum=0;
        int mn=0;
        for(int j=0;j<n;j++){
            int x;
            cin>> x;
            if(j==0){
                sum=x;
                mn=x;
            }
            else{
                sum+=min(mn,x);
                mn=min(mn,x);
            }

        }
        cout << sum << endl;
    }
    return 0;
}