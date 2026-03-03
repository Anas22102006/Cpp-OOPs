#include <bits/stdc++.h>
using namespace std;
int main(){
    const int i=24;
    double d= static_cast<double>(i);
    int* f=const_cast<int*>(&i);
    cout << i<<endl;
    cout << d<<endl;
    cout << *f << endl;
    return 0;
}