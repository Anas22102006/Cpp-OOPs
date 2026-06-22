#include <bits/stdc++.h>
using namespace std;
class Animal{
    public:
    virtual void eat(){
        cout << "Animal is eating" << endl;
    }
    virtual void sleep(){
        cout << "Animal is sleeping" << endl;
    }
};
class Bird : public Animal{
    public:
    void eat() override{
        cout << "Bird is eating" << endl;
    }
    void sleep() override{
        cout << "Bird is sleeping" << endl;
    }
    void fly(){
        cout << "Bird is flying" << endl;
    }
};
int main(){
    Animal A;
    A.eat();
    A.sleep();
    Bird B;
    B.eat();
    B.sleep();
    B.fly();
    return 0;
}
