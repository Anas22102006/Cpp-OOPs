#include <bits/stdc++.h>
using namespace std;
class Complex{
    int re_,im_;
    public:
    Complex(int re=0,int im=0): re_(re),im_(im){}
    Complex operator+(Complex c1){
        return Complex((c1.re_+re_),(c1.im_+im_));
    }
    bool operator==(Complex c){
        return (re_== c.re_ && im_==c.im_);
    }
    void show(){
        cout << re_ <<" + "<<im_ <<"i"<<endl;
    }

};
int main(){
    Complex c1(23,7), c2(23,7) , c3(10,20), c4(23,46);
    if(c1 == c2){
        cout << "yes !"<< endl;
    }
    else{
        cout << "No !"<< endl;
    }
    Complex c5= c1+c2+c3+c4+c5;
    Complex c6=c5;
    c6.show();
    return 0;
}