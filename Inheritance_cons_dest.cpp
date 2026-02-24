#include <bits/stdc++.h>
using namespace std;
class A{
    protected:
    int info_;
    public:
    A(int info) : info_(info){
        cout << "Constructor of A" << endl;
    }
    ~A(){
        cout << "Destructor of A" << endl;
    }
};
class B: public A{
    public:
    B(int info) : A(info){
        cout<< "Constructor of B"<< endl;
    }
    ~B(){
        cout << "Destructor of B" << endl;
    }
};
int main(){
    B b(10);
    return 0;
}
