#include <bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>> &m,int N){
    vector<vector<int>> dup;
    for(int i=0;i<N;i++){
        vector<int> temp;
        for(int j=N-1;j>=0;j--){
            temp.push_back(m[j][i]);
        }
        dup.push_back(temp);
    }
    m=dup;
}
void reflect(vector<vector<int>> &m){
    for(vector<int> &v:m){
        reverse(v.begin(),v.end());
    }
}
int main(){
    int N;
    cin >> N;
    vector<vector<int>> mat;
    int mtsum=0;
    for(int i=0;i<N;i++){
        vector<int> temp;
        for(int j=0;j<N;j++){
            int x;
            cin >> x;
            mtsum+=x;
            temp.push_back(x);
        }
        mat.push_back(temp);
    }
    if(mtsum%2==0){
        rotate(mat,N);
    }
    else{
        reflect(mat);
    }
    int diag=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout << mat[i][j] << " ";
            if(i==j){
                diag+= mat[i][j];
            }
        }
    }
    cout << diag;
    return 0;
}
