#include <iostream>
using namespace std;

class A1{
    int data_;

public:
    A1(int n){
        data_ = n;
    }

    friend class A2;   // A2 can access private data
};

class A2{
public:
    void show(A1 obj){
        cout << "Data = " << obj.data_ << endl;
    }
};

int main(){
    A1 a(10);
    A2 b;

    b.show(a);
}
