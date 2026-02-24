#include <bits/stdc++.h>
using namespace std;
class Complex{
    public:
    int re_,im_;
    explicit Complex(double re=0,double im=0): re_(re),im_(im){}
    void display() {cout << re_ <<" + "<<im_<<" j"<<endl ;}
};
Complex operator+(Complex c1,Complex c2){
    return Complex((c1.re_ + c2.re_) , (c1.im_+c2.im_));
}
Complex operator+(Complex c1, double x){
    Complex c(x); return c1+c; 
}
Complex operator+(double x,Complex c1){
    Complex c(x); return c1+c;
}
ostream& operator<<(ostream& os,Complex c){
    os << c.re_ <<" + "<<c.im_<<" j"<<endl ;
    return os;
}
istream& operator>>(istream& is,Complex &c){
    is >> c.re_ >>c.im_;
    return is;
}
int main(){
    Complex c1(10,20),c2(1,2);
    Complex c3;
    cin >> c3;
    c3.display();
    cout << c3;
    return 0;
}