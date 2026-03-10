#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    int totfac=0;
    for(int i=0;i<N;i++){
        string s;
        cin >> s;
        if(s=="Tetrahedron"){
            totfac+=4;
        }
        else if(s=="Cube"){
            totfac+=6;
        }
        else if(s=="Octahedron"){
            totfac+=8;
        }
        else if(s=="Dodecahedron"){
            totfac+=12;
        }
        else{
            totfac+=20;
        }
    }
    cout << totfac;
    return 0;
}