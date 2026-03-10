#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int height=0;
    int cubes=0;
    for(int i=1;i<=n;i++){
        cubes+=i;
        n-=cubes;
        if(n>=0){
            height++;
        }
        else{
            break;
        }
    }
    cout << height;
    return 0;
}