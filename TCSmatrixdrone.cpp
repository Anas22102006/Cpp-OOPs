#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<vector<int>> vec(N, vector<int> (N));
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> vec[i][j];
        }
    }
    vector<int> maxi(N,0);
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j){
                vec[i][j]*=2;
            }
            if(i+j == (N-1)){
                vec[i][j]/=2;
            }
            maxi[j] = max(maxi[j],vec[i][j]);
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            vec[i][j]= maxi[j] - vec[i][j];
            cout << vec[i][j] << " ";
        }
    }
    return 0;
}