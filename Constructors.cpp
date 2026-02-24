#include <bits/stdc++.h>
using namespace std;

class point{
    int x,y;
    vector<int> v;
public:
    point(){
        v.push_back(10);
    }

    ~point(){
        v.clear();
    }

    void print();
};

void point::print(){
    cout << x << ' ' << y;
}

int main(){
    point p;
    return 0;
}
