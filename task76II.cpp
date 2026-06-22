#include <bits/stdc++.h>
using namespace std;
class Fruit{
    protected:
    string name;
    string taste;
    int size;

    public:
    Fruit(string name,string taste,int size){
        this->name = name;
        this->taste = taste;
        this->size = size;
    }
    virtual void eat(){
        cout << name << " tastes " << taste << endl;
    }
};
class Apple: public Fruit{
    public:
    Apple(): Fruit("Apple","sweet",4){}
    void eat() override{
        cout << "Apple tastes sweet" << endl;
    }
};
class Orange: public Fruit{
    public:
    Orange() : Fruit("Orange","sour",6){}
    void eat() override{
        cout << "Orange tastes sour" << endl;
    }
};
int main(){
    Apple a;
    Orange o;
    a.eat();
    o.eat();
    return 0;
}