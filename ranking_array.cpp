#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> rank(n,1);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]>arr[i]){
                rank[i]++;
            }
        }
    }
    for(int i:rank){
        cout << i << " ";
    }
    return 0;
}