#include <bits/stdc++.h>
using namespace std;

class Test{
    public:
    static int x;
    void get(){
        x=15;
    }
    void print(){
        x=x+10;
        cout <<"x = "<< x<< endl;
    }
};
int Test::x = 0;
int main(){
    Test t1,t2;
    t1.get();
    t2.get();
    {
        Test t1;
        t1.get();
        t1.print();
    }
    t1.print();
    t2.print();
    return 0;
}