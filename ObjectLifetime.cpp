#include <bits/stdc++.h>
using namespace std;
int a1(int x){
    cout<<"a1 :"<< x << endl;
    return x;
}
int a2(int x){
    cout<<"a2 :"<< x << endl;
    return x;
}
class X{
    int m2_;
    int m1_;
    public:
    X (int m1,int m2):
        m1_(a1(m1)),
        m2_(a2(m2))
        {
            cout <<"Ctor !"<< endl;
        }
    ~X(){
        cout <<"Dtor !"<< endl;
    }

};
int main(){
    X a(2,3);
    return 0;
}